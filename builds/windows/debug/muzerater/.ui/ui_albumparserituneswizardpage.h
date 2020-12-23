/********************************************************************************
** Form generated from reading UI file 'albumparserituneswizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMPARSERITUNESWIZARDPAGE_H
#define UI_ALBUMPARSERITUNESWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_albumParserITunesWizardPage
{
public:
    QLineEdit *defaultInFilenameLineEdit;
    QRadioButton *useDefaultInFileRadioButton;
    QRadioButton *useCustomInFileRadioButton;
    QLineEdit *customInFilenameLineEdit;
    QPushButton *customInFileBrowsePushButton;
    QLabel *defaultInFileNotAvailableLabel;
    QLineEdit *inFilenameLineEdit;
    QLineEdit *summaryLineEdit;

    void setupUi(QWizardPage *albumParserITunesWizardPage)
    {
        if (albumParserITunesWizardPage->objectName().isEmpty())
            albumParserITunesWizardPage->setObjectName(QString::fromUtf8("albumParserITunesWizardPage"));
        albumParserITunesWizardPage->resize(920, 275);
        albumParserITunesWizardPage->setAutoFillBackground(false);
        defaultInFilenameLineEdit = new QLineEdit(albumParserITunesWizardPage);
        defaultInFilenameLineEdit->setObjectName(QString::fromUtf8("defaultInFilenameLineEdit"));
        defaultInFilenameLineEdit->setEnabled(true);
        defaultInFilenameLineEdit->setGeometry(QRect(40, 40, 711, 25));
        defaultInFilenameLineEdit->setFocusPolicy(Qt::TabFocus);
        defaultInFilenameLineEdit->setReadOnly(true);
        useDefaultInFileRadioButton = new QRadioButton(albumParserITunesWizardPage);
        useDefaultInFileRadioButton->setObjectName(QString::fromUtf8("useDefaultInFileRadioButton"));
        useDefaultInFileRadioButton->setGeometry(QRect(10, 10, 731, 23));
        useDefaultInFileRadioButton->setChecked(true);
        useCustomInFileRadioButton = new QRadioButton(albumParserITunesWizardPage);
        useCustomInFileRadioButton->setObjectName(QString::fromUtf8("useCustomInFileRadioButton"));
        useCustomInFileRadioButton->setGeometry(QRect(10, 120, 741, 23));
        customInFilenameLineEdit = new QLineEdit(albumParserITunesWizardPage);
        customInFilenameLineEdit->setObjectName(QString::fromUtf8("customInFilenameLineEdit"));
        customInFilenameLineEdit->setGeometry(QRect(40, 150, 711, 25));
        customInFileBrowsePushButton = new QPushButton(albumParserITunesWizardPage);
        customInFileBrowsePushButton->setObjectName(QString::fromUtf8("customInFileBrowsePushButton"));
        customInFileBrowsePushButton->setGeometry(QRect(770, 145, 112, 34));
        customInFileBrowsePushButton->setFocusPolicy(Qt::TabFocus);
        defaultInFileNotAvailableLabel = new QLabel(albumParserITunesWizardPage);
        defaultInFileNotAvailableLabel->setObjectName(QString::fromUtf8("defaultInFileNotAvailableLabel"));
        defaultInFileNotAvailableLabel->setGeometry(QRect(40, 70, 701, 19));
        inFilenameLineEdit = new QLineEdit(albumParserITunesWizardPage);
        inFilenameLineEdit->setObjectName(QString::fromUtf8("inFilenameLineEdit"));
        inFilenameLineEdit->setGeometry(QRect(460, 90, 371, 25));
        inFilenameLineEdit->setFocusPolicy(Qt::NoFocus);
        summaryLineEdit = new QLineEdit(albumParserITunesWizardPage);
        summaryLineEdit->setObjectName(QString::fromUtf8("summaryLineEdit"));
        summaryLineEdit->setGeometry(QRect(510, 190, 113, 25));
        summaryLineEdit->setFocusPolicy(Qt::NoFocus);
        QWidget::setTabOrder(useDefaultInFileRadioButton, useCustomInFileRadioButton);
        QWidget::setTabOrder(useCustomInFileRadioButton, customInFilenameLineEdit);
        QWidget::setTabOrder(customInFilenameLineEdit, customInFileBrowsePushButton);
        QWidget::setTabOrder(customInFileBrowsePushButton, defaultInFilenameLineEdit);

        retranslateUi(albumParserITunesWizardPage);

        QMetaObject::connectSlotsByName(albumParserITunesWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *albumParserITunesWizardPage)
    {
        albumParserITunesWizardPage->setWindowTitle(QCoreApplication::translate("albumParserITunesWizardPage", "WizardPage", nullptr));
        albumParserITunesWizardPage->setTitle(QCoreApplication::translate("albumParserITunesWizardPage", "iTunes Music Library", nullptr));
        albumParserITunesWizardPage->setSubTitle(QCoreApplication::translate("albumParserITunesWizardPage", "Select the location of the iTunes Music Library XML file. To use this file, the \"Share iTunes XML Library with other applications\" option must be checked in the iTunes application's preferences (under Advanced options).", nullptr));
        useDefaultInFileRadioButton->setText(QCoreApplication::translate("albumParserITunesWizardPage", "Use the default iTunes Music Library XML database.", nullptr));
        useCustomInFileRadioButton->setText(QCoreApplication::translate("albumParserITunesWizardPage", "Use a manually selected  iTunes Music Library XML database file.", nullptr));
        customInFileBrowsePushButton->setText(QCoreApplication::translate("albumParserITunesWizardPage", "Browse", nullptr));
        defaultInFileNotAvailableLabel->setText(QCoreApplication::translate("albumParserITunesWizardPage", "(This file is currently not available.)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumParserITunesWizardPage: public Ui_albumParserITunesWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMPARSERITUNESWIZARDPAGE_H
