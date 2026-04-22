#include "WavReader.h"
#include <cstring>
#include <QDebug>
#include <QFile>

WavReader::WavReader(const QString &filename)
{
    QFile file(filename);

    if (!file.open(QIODevice::ReadOnly)) {
        m_result = FailedToOpen;
        return;
    }

    m_data = file.readAll();

    //Read WAV header
    std::memcpy(&m_header, m_data.data(), sizeof(m_header));

    if (m_header.chunkSize > std::numeric_limits<int>::max()) {
        qDebug() << "Chunk size more than max";
        return;
    }

    if (m_data.size() != static_cast<int>(m_header.chunkSize + 8)) {
        qDebug() << "incorrect data size";
        return;
    }

    //Reading file
    chunk_t chunk;

//    int pos = 12 + 8 + m_header.subchunk1Size;
    QByteArray dataHeader(4, char(0x00));
    quint8 head[4] {0x64, 0x61, 0x74, 0x61};

    std::memcpy(dataHeader.data(), head, 4);

    //int pos = QString(m_data).indexOf(dataHeader) + 4;
    int pos = m_data.indexOf(dataHeader);

    qDebug() << QString("Subchunk size = %1").arg(m_header.subchunk1Size);

    memcpy(&chunk, m_data.data() + pos, sizeof(chunk));

    // Sample size in bytes
    int sample_size = m_header.bitsPerSample / 8;

    qDebug() << QString("Bits per sample = %1 Chunk size = %2").arg(QString::number(m_header.bitsPerSample),
                                                                    QString::number(chunk.size));

    qDebug() << QString("Sample size = %1").arg(QString::number(sample_size));

    int samples_count = chunk.size * 8 / m_header.bitsPerSample;
    qDebug() << QString("Samples count = %1").arg(QString::number(samples_count));

    pos += sizeof(chunk);
    m_leftChannel.fill(0, samples_count / 2);
    m_rightChannel.fill(0, samples_count / 2);

    auto begin = m_data.data() + pos;

    qint32 left = 0x000000;
    qint32 right = 0x000000;

    for (int i = 0; i < samples_count; i = i + 2) {

        if (sample_size == 2) {

            m_leftChannel[i/2] = *reinterpret_cast<qint16*>(begin + i * sample_size);
            m_rightChannel[i/2] = *reinterpret_cast<qint16*>(begin + (i + 1) * sample_size);
        } else {
            std::memcpy(reinterpret_cast<quint8*>(&left) + 1, begin + i * sample_size, sample_size);
            std::memcpy(reinterpret_cast<quint8*>(&right) + 1, begin + (i + 1) * sample_size, sample_size);

            //m_leftChannel[i/2] = *reinterpret_cast<qint32*>(begin + i * sample_size);
            //m_rightChannel[i/2] = *reinterpret_cast<qint32*>(begin + (i + 1) * sample_size);

            m_leftChannel[i/2] = left;
            m_rightChannel[i/2] = right;
        }
    }
}

const QVector<int>& WavReader::leftChannel() const
{
    return m_leftChannel;
}

const QVector<int>& WavReader::rightChannel() const
{
    return m_rightChannel;
}
