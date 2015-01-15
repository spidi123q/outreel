/********************************************************************************
** Form generated from reading UI file 'ffmpegfrontend.ui'
**
** Created: Tue Apr 23 22:21:22 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFMPEGFRONTEND_H
#define UI_FFMPEGFRONTEND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ffmpegFrontend
{
public:
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_6;
    QComboBox *CB_ffmpeg_preset;
    QPushButton *PB_save_current_preset;
    QVBoxLayout *verticalLayout_8;
    QPushButton *PB_set_ffmpeg_dir;
    QLineEdit *LE_ffmpeg_dir;
    QGridLayout *gridLayout_5;
    QLabel *label_17;
    QPushButton *PB_convert_video_file;
    QCheckBox *CB_delete_original_video;
    QPushButton *pushButton;
    QPushButton *PB_close;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QLabel *label_18;
    QWidget *tab_3;
    QTextEdit *TE_preview_args;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_6;
    QLabel *label_19;
    QComboBox *CB_container_2;
    QLabel *label_20;
    QWidget *tab_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *CB_video_codec;
    QLabel *label_11;
    QSpinBox *SB_video_bitrate;
    QLabel *label_12;
    QSpinBox *SB_video_framerate;
    QCheckBox *CB_disable_video;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *SB_x_resolution;
    QLabel *label_5;
    QSpinBox *SB_y_resolution;
    QCheckBox *CB_as_original;
    QWidget *tab;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QComboBox *CB_audio_codec;
    QLabel *label_13;
    QSpinBox *SB_audio_bitrate;
    QLabel *label_14;
    QSpinBox *SB_audio_frequency;
    QSpinBox *SB_audio_channels;
    QLabel *label_15;
    QCheckBox *CB_disable_audio;

    void setupUi(QDialog *ffmpegFrontend)
    {
        if (ffmpegFrontend->objectName().isEmpty())
            ffmpegFrontend->setObjectName(QString::fromUtf8("ffmpegFrontend"));
        ffmpegFrontend->resize(709, 327);
        ffmpegFrontend->setMaximumSize(QSize(709, 327));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/icon32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ffmpegFrontend->setWindowIcon(icon);
        gridLayout_8 = new QGridLayout(ffmpegFrontend);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_8->setContentsMargins(-1, -1, 10, -1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_8 = new QLabel(ffmpegFrontend);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_8->setWordWrap(true);

        verticalLayout_4->addWidget(label_8);


        horizontalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        CB_ffmpeg_preset = new QComboBox(ffmpegFrontend);
        CB_ffmpeg_preset->setObjectName(QString::fromUtf8("CB_ffmpeg_preset"));
        CB_ffmpeg_preset->setMinimumSize(QSize(180, 21));

        verticalLayout_6->addWidget(CB_ffmpeg_preset);

        PB_save_current_preset = new QPushButton(ffmpegFrontend);
        PB_save_current_preset->setObjectName(QString::fromUtf8("PB_save_current_preset"));
        PB_save_current_preset->setMinimumSize(QSize(200, 0));
        PB_save_current_preset->setMaximumSize(QSize(220, 16777215));

        verticalLayout_6->addWidget(PB_save_current_preset);


        horizontalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        PB_set_ffmpeg_dir = new QPushButton(ffmpegFrontend);
        PB_set_ffmpeg_dir->setObjectName(QString::fromUtf8("PB_set_ffmpeg_dir"));

        verticalLayout_8->addWidget(PB_set_ffmpeg_dir);

        LE_ffmpeg_dir = new QLineEdit(ffmpegFrontend);
        LE_ffmpeg_dir->setObjectName(QString::fromUtf8("LE_ffmpeg_dir"));

        verticalLayout_8->addWidget(LE_ffmpeg_dir);


        horizontalLayout_8->addLayout(verticalLayout_8);


        gridLayout_8->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_17 = new QLabel(ffmpegFrontend);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 0, 0, 1, 1);

        PB_convert_video_file = new QPushButton(ffmpegFrontend);
        PB_convert_video_file->setObjectName(QString::fromUtf8("PB_convert_video_file"));
        PB_convert_video_file->setMinimumSize(QSize(0, 27));
        PB_convert_video_file->setMaximumSize(QSize(16777215, 27));

        gridLayout_5->addWidget(PB_convert_video_file, 0, 1, 1, 1);

        CB_delete_original_video = new QCheckBox(ffmpegFrontend);
        CB_delete_original_video->setObjectName(QString::fromUtf8("CB_delete_original_video"));

        gridLayout_5->addWidget(CB_delete_original_video, 0, 2, 1, 1);

        pushButton = new QPushButton(ffmpegFrontend);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_5->addWidget(pushButton, 0, 3, 1, 1);

        PB_close = new QPushButton(ffmpegFrontend);
        PB_close->setObjectName(QString::fromUtf8("PB_close"));
        PB_close->setMinimumSize(QSize(0, 27));
        PB_close->setMaximumSize(QSize(16777215, 27));

        gridLayout_5->addWidget(PB_close, 0, 4, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 2, 0, 1, 1);

        tabWidget = new QTabWidget(ffmpegFrontend);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMinimumSize(QSize(691, 50));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(0, 0, 671, 151));
        label_18->setMinimumSize(QSize(542, 118));
        label_18->setMaximumSize(QSize(671, 151));
        QFont font1;
        font1.setPointSize(9);
        label_18->setFont(font1);
        label_18->setWordWrap(true);
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        TE_preview_args = new QTextEdit(tab_3);
        TE_preview_args->setObjectName(QString::fromUtf8("TE_preview_args"));
        TE_preview_args->setGeometry(QRect(10, 70, 661, 41));
        layoutWidget_4 = new QWidget(tab_3);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(9, 9, 223, 23));
        gridLayout_6 = new QGridLayout(layoutWidget_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(0, 21));
        label_19->setFont(font);

        gridLayout_6->addWidget(label_19, 0, 0, 1, 1);

        CB_container_2 = new QComboBox(tab_3);
        CB_container_2->setObjectName(QString::fromUtf8("CB_container_2"));
        CB_container_2->setGeometry(QRect(240, 10, 171, 21));
        CB_container_2->setMinimumSize(QSize(0, 21));
        CB_container_2->setMaximumSize(QSize(16777215, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Nimbus Mono L"));
        CB_container_2->setFont(font2);
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 43, 141, 17));
        label_20->setFont(font);
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 671, 62));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 21));
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        CB_video_codec = new QComboBox(layoutWidget_2);
        CB_video_codec->setObjectName(QString::fromUtf8("CB_video_codec"));
        CB_video_codec->setMinimumSize(QSize(0, 21));
        CB_video_codec->setMaximumSize(QSize(16777215, 21));
        CB_video_codec->setFont(font2);

        gridLayout_2->addWidget(CB_video_codec, 0, 1, 1, 2);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(0, 21));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_11, 0, 3, 1, 1);

        SB_video_bitrate = new QSpinBox(layoutWidget_2);
        SB_video_bitrate->setObjectName(QString::fromUtf8("SB_video_bitrate"));
        SB_video_bitrate->setMinimumSize(QSize(0, 21));
        SB_video_bitrate->setMaximum(30000);
        SB_video_bitrate->setSingleStep(10);
        SB_video_bitrate->setValue(200);

        gridLayout_2->addWidget(SB_video_bitrate, 0, 4, 1, 1);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(0, 21));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_12, 0, 5, 1, 2);

        SB_video_framerate = new QSpinBox(layoutWidget_2);
        SB_video_framerate->setObjectName(QString::fromUtf8("SB_video_framerate"));
        SB_video_framerate->setMinimumSize(QSize(0, 21));
        SB_video_framerate->setMaximum(200);
        SB_video_framerate->setSingleStep(1);
        SB_video_framerate->setValue(25);

        gridLayout_2->addWidget(SB_video_framerate, 0, 7, 1, 2);

        CB_disable_video = new QCheckBox(layoutWidget_2);
        CB_disable_video->setObjectName(QString::fromUtf8("CB_disable_video"));
        CB_disable_video->setMinimumSize(QSize(0, 21));

        gridLayout_2->addWidget(CB_disable_video, 1, 0, 1, 2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 21));
        label_4->setText(QString::fromUtf8("Width"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 1, 3, 1, 1);

        SB_x_resolution = new QSpinBox(layoutWidget_2);
        SB_x_resolution->setObjectName(QString::fromUtf8("SB_x_resolution"));
        SB_x_resolution->setMinimumSize(QSize(0, 21));
        SB_x_resolution->setMaximum(10000);
        SB_x_resolution->setSingleStep(8);
        SB_x_resolution->setValue(640);

        gridLayout_2->addWidget(SB_x_resolution, 1, 4, 1, 1);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 21));
        label_5->setText(QString::fromUtf8("Height"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 1, 5, 1, 1);

        SB_y_resolution = new QSpinBox(layoutWidget_2);
        SB_y_resolution->setObjectName(QString::fromUtf8("SB_y_resolution"));
        SB_y_resolution->setMinimumSize(QSize(0, 21));
        SB_y_resolution->setMaximum(10000);
        SB_y_resolution->setSingleStep(8);
        SB_y_resolution->setValue(480);

        gridLayout_2->addWidget(SB_y_resolution, 1, 6, 1, 2);

        CB_as_original = new QCheckBox(layoutWidget_2);
        CB_as_original->setObjectName(QString::fromUtf8("CB_as_original"));
        CB_as_original->setMinimumSize(QSize(0, 21));
        CB_as_original->setChecked(true);

        gridLayout_2->addWidget(CB_as_original, 1, 8, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget_3 = new QWidget(tab);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 0, 661, 61));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 21));
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        CB_audio_codec = new QComboBox(layoutWidget_3);
        CB_audio_codec->setObjectName(QString::fromUtf8("CB_audio_codec"));
        CB_audio_codec->setMinimumSize(QSize(0, 21));
        CB_audio_codec->setMaximumSize(QSize(16777215, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Nimbus Mono L"));
        font3.setPointSize(8);
        CB_audio_codec->setFont(font3);

        gridLayout_3->addWidget(CB_audio_codec, 0, 1, 1, 2);

        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(0, 21));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_13, 0, 3, 1, 1);

        SB_audio_bitrate = new QSpinBox(layoutWidget_3);
        SB_audio_bitrate->setObjectName(QString::fromUtf8("SB_audio_bitrate"));
        SB_audio_bitrate->setMinimumSize(QSize(0, 21));
        SB_audio_bitrate->setMaximum(30000);
        SB_audio_bitrate->setSingleStep(1);
        SB_audio_bitrate->setValue(64);

        gridLayout_3->addWidget(SB_audio_bitrate, 0, 4, 1, 1);

        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(0, 21));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_14, 0, 5, 1, 1);

        SB_audio_frequency = new QSpinBox(layoutWidget_3);
        SB_audio_frequency->setObjectName(QString::fromUtf8("SB_audio_frequency"));
        SB_audio_frequency->setMinimumSize(QSize(0, 21));
        SB_audio_frequency->setMaximum(150000);
        SB_audio_frequency->setSingleStep(10);
        SB_audio_frequency->setValue(44100);

        gridLayout_3->addWidget(SB_audio_frequency, 0, 6, 1, 1);

        SB_audio_channels = new QSpinBox(layoutWidget_3);
        SB_audio_channels->setObjectName(QString::fromUtf8("SB_audio_channels"));
        SB_audio_channels->setMinimumSize(QSize(0, 21));
        SB_audio_channels->setMaximum(20);
        SB_audio_channels->setSingleStep(1);
        SB_audio_channels->setValue(1);

        gridLayout_3->addWidget(SB_audio_channels, 1, 4, 1, 1);

        label_15 = new QLabel(layoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(0, 21));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_15, 1, 3, 1, 1);

        CB_disable_audio = new QCheckBox(layoutWidget_3);
        CB_disable_audio->setObjectName(QString::fromUtf8("CB_disable_audio"));
        CB_disable_audio->setMinimumSize(QSize(0, 21));

        gridLayout_3->addWidget(CB_disable_audio, 1, 0, 1, 3);

        tabWidget->addTab(tab, QString());

        gridLayout_8->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(ffmpegFrontend);
        QObject::connect(PB_close, SIGNAL(clicked()), ffmpegFrontend, SLOT(close()));

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ffmpegFrontend);
    } // setupUi

    void retranslateUi(QDialog *ffmpegFrontend)
    {
        ffmpegFrontend->setWindowTitle(QApplication::translate("ffmpegFrontend", "OutReel", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ffmpegFrontend", "<html><head/><body><p>Select Output Format</p><p><span style=\" color:#005500;\">Step-1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        PB_save_current_preset->setText(QApplication::translate("ffmpegFrontend", "save current preset", 0, QApplication::UnicodeUTF8));
        PB_set_ffmpeg_dir->setText(QApplication::translate("ffmpegFrontend", "ffmpeg executable path", 0, QApplication::UnicodeUTF8));
        LE_ffmpeg_dir->setText(QApplication::translate("ffmpegFrontend", "/usr/bin/ffmpeg", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ffmpegFrontend", "<html><head/><body><p><span style=\" font-weight:600; color:#005500;\">Step-2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        PB_convert_video_file->setText(QApplication::translate("ffmpegFrontend", "Choose video file(s)", 0, QApplication::UnicodeUTF8));
        CB_delete_original_video->setText(QApplication::translate("ffmpegFrontend", "Delete original video\n"
"after the conversion", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ffmpegFrontend", "About", 0, QApplication::UnicodeUTF8));
        PB_close->setText(QApplication::translate("ffmpegFrontend", "Exit", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ffmpegFrontend", "\n"
"\n"
"1. select your needed output format of video or audio\n"
"\n"
"2. if want change audio,video settings using above tabs and to save new preset run outreel as root\n"
"\n"
"3.to begin conversion choose file using below buttons then encoding will begin automatically\n"
"\n"
"This software need ffmpeg for conversion so you can install it by typing \"sudo apt-get install ffmpeg\"\n"
"without quotes in terminal", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ffmpegFrontend", "Help", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ffmpegFrontend", "Container format", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ffmpegFrontend", "Encoding Command", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ffmpegFrontend", "Option", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ffmpegFrontend", "Video codec", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ffmpegFrontend", "Bit rate", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ffmpegFrontend", "Frame rate", 0, QApplication::UnicodeUTF8));
        CB_disable_video->setText(QApplication::translate("ffmpegFrontend", "Disable video stream", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ffmpegFrontend", "Resolution", 0, QApplication::UnicodeUTF8));
        CB_as_original->setText(QApplication::translate("ffmpegFrontend", "Original", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ffmpegFrontend", "Video", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ffmpegFrontend", "Audio codec", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ffmpegFrontend", "Bit rate", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ffmpegFrontend", "Frequency", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ffmpegFrontend", "Channels", 0, QApplication::UnicodeUTF8));
        CB_disable_audio->setText(QApplication::translate("ffmpegFrontend", "Disable audio stream", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ffmpegFrontend", "Audio", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ffmpegFrontend: public Ui_ffmpegFrontend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFMPEGFRONTEND_H
