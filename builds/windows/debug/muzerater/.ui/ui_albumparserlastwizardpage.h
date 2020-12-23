/********************************************************************************
** Form generated from reading UI file 'albumparserlastwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMPARSERLASTWIZARDPAGE_H
#define UI_ALBUMPARSERLASTWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_albumParserLastWizardPage
{
public:
    QPushButton *launchPushButton;
    QPushButton *showFolderPushButton;
    QLineEdit *outSaveFilenameLineEdit;
    QLabel *outSaveFileLabel;
    QLabel *processErrorLabel;

    void setupUi(QWizardPage *albumParserLastWizardPage)
    {
        if (albumParserLastWizardPage->objectName().isEmpty())
            albumParserLastWizardPage->setObjectName(QString::fromUtf8("albumParserLastWizardPage"));
        albumParserLastWizardPage->resize(1036, 205);
        albumParserLastWizardPage->setAutoFillBackground(false);
        launchPushButton = new QPushButton(albumParserLastWizardPage);
        launchPushButton->setObjectName(QString::fromUtf8("launchPushButton"));
        launchPushButton->setGeometry(QRect(560, 80, 171, 34));
        launchPushButton->setFocusPolicy(Qt::TabFocus);
        launchPushButton->setAutoFillBackground(false);
        showFolderPushButton = new QPushButton(albumParserLastWizardPage);
        showFolderPushButton->setObjectName(QString::fromUtf8("showFolderPushButton"));
        showFolderPushButton->setGeometry(QRect(370, 80, 171, 34));
        showFolderPushButton->setFocusPolicy(Qt::TabFocus);
        outSaveFilenameLineEdit = new QLineEdit(albumParserLastWizardPage);
        outSaveFilenameLineEdit->setObjectName(QString::fromUtf8("outSaveFilenameLineEdit"));
        outSaveFilenameLineEdit->setGeometry(QRect(20, 40, 711, 25));
        outSaveFilenameLineEdit->setFocusPolicy(Qt::TabFocus);
        outSaveFilenameLineEdit->setReadOnly(true);
        outSaveFileLabel = new QLabel(albumParserLastWizardPage);
        outSaveFileLabel->setObjectName(QString::fromUtf8("outSaveFileLabel"));
        outSaveFileLabel->setGeometry(QRect(20, 10, 611, 19));
        processErrorLabel = new QLabel(albumParserLastWizardPage);
        processErrorLabel->setObjectName(QString::fromUtf8("processErrorLabel"));
        processErrorLabel->setGeometry(QRect(20, 90, 341, 19));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        processErrorLabel->setFont(font);
        QWidget::setTabOrder(showFolderPushButton, launchPushButton);
        QWidget::setTabOrder(launchPushButton, outSaveFilenameLineEdit);

        retranslateUi(albumParserLastWizardPage);

        QMetaObject::connectSlotsByName(albumParserLastWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *albumParserLastWizardPage)
    {
        albumParserLastWizardPage->setWindowTitle(QCoreApplication::translate("albumParserLastWizardPage", "WizardPage", nullptr));
        albumParserLastWizardPage->setTitle(QCoreApplication::translate("albumParserLastWizardPage", "Processing Finished", nullptr));
        albumParserLastWizardPage->setSubTitle(QCoreApplication::translate("albumParserLastWizardPage", "The processing has been completed.", nullptr));
        launchPushButton->setText(QCoreApplication::translate("albumParserLastWizardPage", "Launch", nullptr));
        showFolderPushButton->setText(QCoreApplication::translate("albumParserLastWizardPage", "Show Folder", nullptr));
        outSaveFileLabel->setText(QCoreApplication::translate("albumParserLastWizardPage", "File was saved to:", nullptr));
        processErrorLabel->setText(QCoreApplication::translate("albumParserLastWizardPage", "Errors occurred during the processing.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumParserLastWizardPage: public Ui_albumParserLastWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMPARSERLASTWIZARDPAGE_H
