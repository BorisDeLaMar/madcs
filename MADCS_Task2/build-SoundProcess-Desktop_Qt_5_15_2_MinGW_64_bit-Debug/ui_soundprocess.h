/********************************************************************************
** Form generated from reading UI file 'soundprocess.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUNDPROCESS_H
#define UI_SOUNDPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SoundProcess
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonProcessFile;
    QPushButton *pushButtonOpenFile;
    QPushButton *pushButtonSaveResultAsText;
    QPushButton *pushButtonSaveResultAsFile;
    QPushButton *pushButtonSaveInitAsText;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SoundProcess)
    {
        if (SoundProcess->objectName().isEmpty())
            SoundProcess->setObjectName(QString::fromUtf8("SoundProcess"));
        SoundProcess->resize(800, 600);
        centralwidget = new QWidget(SoundProcess);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonProcessFile = new QPushButton(centralwidget);
        pushButtonProcessFile->setObjectName(QString::fromUtf8("pushButtonProcessFile"));

        gridLayout->addWidget(pushButtonProcessFile, 2, 1, 1, 1);

        pushButtonOpenFile = new QPushButton(centralwidget);
        pushButtonOpenFile->setObjectName(QString::fromUtf8("pushButtonOpenFile"));

        gridLayout->addWidget(pushButtonOpenFile, 1, 1, 1, 1);

        pushButtonSaveResultAsText = new QPushButton(centralwidget);
        pushButtonSaveResultAsText->setObjectName(QString::fromUtf8("pushButtonSaveResultAsText"));

        gridLayout->addWidget(pushButtonSaveResultAsText, 2, 2, 1, 1);

        pushButtonSaveResultAsFile = new QPushButton(centralwidget);
        pushButtonSaveResultAsFile->setObjectName(QString::fromUtf8("pushButtonSaveResultAsFile"));

        gridLayout->addWidget(pushButtonSaveResultAsFile, 3, 2, 1, 1);

        pushButtonSaveInitAsText = new QPushButton(centralwidget);
        pushButtonSaveInitAsText->setObjectName(QString::fromUtf8("pushButtonSaveInitAsText"));

        gridLayout->addWidget(pushButtonSaveInitAsText, 1, 2, 1, 1);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 3, 1, 1, 1);

        SoundProcess->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SoundProcess);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        SoundProcess->setMenuBar(menubar);
        statusbar = new QStatusBar(SoundProcess);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SoundProcess->setStatusBar(statusbar);

        retranslateUi(SoundProcess);

        QMetaObject::connectSlotsByName(SoundProcess);
    } // setupUi

    void retranslateUi(QMainWindow *SoundProcess)
    {
        SoundProcess->setWindowTitle(QCoreApplication::translate("SoundProcess", "SoundProcess", nullptr));
        pushButtonProcessFile->setText(QCoreApplication::translate("SoundProcess", "Process File", nullptr));
        pushButtonOpenFile->setText(QCoreApplication::translate("SoundProcess", "Open File", nullptr));
        pushButtonSaveResultAsText->setText(QCoreApplication::translate("SoundProcess", "Save to text", nullptr));
        pushButtonSaveResultAsFile->setText(QCoreApplication::translate("SoundProcess", "Save to file", nullptr));
        pushButtonSaveInitAsText->setText(QCoreApplication::translate("SoundProcess", "Save to text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoundProcess: public Ui_SoundProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUNDPROCESS_H
