/********************************************************************************
** Form generated from reading UI file 'ffmpegoutput.ui'
**
** Created: Tue Apr 23 22:21:22 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFMPEGOUTPUT_H
#define UI_FFMPEGOUTPUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ffmpegOutput
{
public:
    QGridLayout *gridLayout;
    QPushButton *PB_stop_ffmpeg;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QPlainTextEdit *PTE_standard_output;
    QWidget *tab_2;
    QPlainTextEdit *PTE_ffmpeg_command;
    QLabel *label_2;
    QPlainTextEdit *PTE_ffmpeg_error;

    void setupUi(QDialog *ffmpegOutput)
    {
        if (ffmpegOutput->objectName().isEmpty())
            ffmpegOutput->setObjectName(QString::fromUtf8("ffmpegOutput"));
        ffmpegOutput->resize(477, 391);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ffmpegOutput->sizePolicy().hasHeightForWidth());
        ffmpegOutput->setSizePolicy(sizePolicy);
        ffmpegOutput->setMinimumSize(QSize(477, 391));
        ffmpegOutput->setMaximumSize(QSize(477, 391));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/icon32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ffmpegOutput->setWindowIcon(icon);
        gridLayout = new QGridLayout(ffmpegOutput);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        PB_stop_ffmpeg = new QPushButton(ffmpegOutput);
        PB_stop_ffmpeg->setObjectName(QString::fromUtf8("PB_stop_ffmpeg"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PB_stop_ffmpeg->sizePolicy().hasHeightForWidth());
        PB_stop_ffmpeg->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(PB_stop_ffmpeg, 2, 0, 1, 1);

        tabWidget = new QTabWidget(ffmpegOutput);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(459, 340));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -3, 459, 17));
        PTE_standard_output = new QPlainTextEdit(tab);
        PTE_standard_output->setObjectName(QString::fromUtf8("PTE_standard_output"));
        PTE_standard_output->setGeometry(QRect(0, 20, 461, 291));
        PTE_standard_output->setStyleSheet(QString::fromUtf8("background-image:url(:/icons/a.png);"));
        PTE_standard_output->setReadOnly(true);
        PTE_standard_output->setBackgroundVisible(false);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        PTE_ffmpeg_command = new QPlainTextEdit(tab_2);
        PTE_ffmpeg_command->setObjectName(QString::fromUtf8("PTE_ffmpeg_command"));
        PTE_ffmpeg_command->setGeometry(QRect(-2, 23, 461, 291));
        PTE_ffmpeg_command->setMinimumSize(QSize(0, 81));
        PTE_ffmpeg_command->setStyleSheet(QString::fromUtf8("background-image:url(:/icons/a.png);"));
        PTE_ffmpeg_command->setReadOnly(true);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 459, 17));
        PTE_ffmpeg_error = new QPlainTextEdit(tab_2);
        PTE_ffmpeg_error->setObjectName(QString::fromUtf8("PTE_ffmpeg_error"));
        PTE_ffmpeg_error->setGeometry(QRect(0, 230, 459, 121));
        PTE_ffmpeg_error->setMinimumSize(QSize(0, 81));
        PTE_ffmpeg_error->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(255,255,255);"));
        PTE_ffmpeg_error->setReadOnly(true);
        tabWidget->addTab(tab_2, QString());
        PTE_ffmpeg_error->raise();
        PTE_ffmpeg_command->raise();
        label_2->raise();

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(ffmpegOutput);
        QObject::connect(PB_stop_ffmpeg, SIGNAL(clicked()), ffmpegOutput, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ffmpegOutput);
    } // setupUi

    void retranslateUi(QDialog *ffmpegOutput)
    {
        ffmpegOutput->setWindowTitle(QApplication::translate("ffmpegOutput", "ffmpeg output", 0, QApplication::UnicodeUTF8));
        PB_stop_ffmpeg->setText(QApplication::translate("ffmpegOutput", "Exit to background", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ffmpegOutput", "ffmpeg output", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ffmpegOutput", "Output", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ffmpegOutput", "ffmpeg executed command", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ffmpegOutput", "Command", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ffmpegOutput: public Ui_ffmpegOutput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFMPEGOUTPUT_H
