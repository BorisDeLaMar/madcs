#ifndef WAVREADER_H
#define WAVREADER_H

#include <QString>
#include <QVector>
#include <QTextStream>

//Wav Header
struct wav_header_t
{
    char chunkID[4]; //"RIFF" = 0x46464952
    unsigned long chunkSize; //28 [+ sizeof(wExtraFormatBytes) + wExtraFormatBytes] + sum(sizeof(chunk.id) + sizeof(chunk.size) + chunk.size)
    char format[4]; //"WAVE" = 0x45564157
    char subchunk1ID[4]; //"fmt " = 0x20746D66
    unsigned long subchunk1Size; //16 [+ sizeof(wExtraFormatBytes) + wExtraFormatBytes]
    unsigned short audioFormat;
    unsigned short numChannels;
    unsigned long sampleRate;
    unsigned long byteRate;
    unsigned short blockAlign;
    unsigned short bitsPerSample;
    //[WORD wExtraFormatBytes;]
    //[Extra format bytes]
};

//Chunks
struct chunk_t
{
    char ID[4]; //"data" = 0x61746164
    unsigned long size;  //Chunk data bytes
};

class WavReader
{
public:
    enum Result {
        Undefined,
        FailedToOpen,
        CorruptedFile
    };

    WavReader(const QString& filename);

    int size() const {
        return m_leftChannel.size();
    }

    const QVector<int>& leftChannel() const;
    const QVector<int>& rightChannel() const;

    int sampleRate() const {
        return m_header.sampleRate;
    }

    wav_header_t header() const {
        return m_header;
    }

private:
    QByteArray m_data;

    QVector<int> m_leftChannel;
    QVector<int> m_rightChannel;

    wav_header_t m_header;

    Result m_result = Undefined;
};

#endif // WAVREADER_H
