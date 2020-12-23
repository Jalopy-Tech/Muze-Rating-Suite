/********************************************************************************
** Form generated from reading UI file 'muzeraterresultwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERRESULTWIZARDPAGE_H
#define UI_MUZERATERRESULTWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterResultWizardPage
{
public:
    QPushButton *launchOutputFilePushButton;
    QPushButton *showOutputFolderPushButton;
    QLineEdit *outputFilePathLineEdit;
    QLabel *outputFilePathLabel;
    QLabel *hasErrorLabel;

    void setupUi(QWizardPage *muzeRaterResultWizardPage)
    {
        if (muzeRaterResultWizardPage->objectName().isEmpty())
            muzeRaterResultWizardPage->setObjectName(QString::fromUtf8("muzeRaterResultWizardPage"));
        muzeRaterResultWizardPage->resize(1036, 291);
        launchOutputFilePushButton = new QPushButton(muzeRaterResultWizardPage);
        launchOutputFilePushButton->setObjectName(QString::fromUtf8("launchOutputFilePushButton"));
        launchOutputFilePushButton->setGeometry(QRect(560, 90, 171, 34));
        launchOutputFilePushButton->setAutoFillBackground(false);
        showOutputFolderPushButton = new QPushButton(muzeRaterResultWizardPage);
        showOutputFolderPushButton->setObjectName(QString::fromUtf8("showOutputFolderPushButton"));
        showOutputFolderPushButton->setGeometry(QRect(370, 90, 171, 34));
        outputFilePathLineEdit = new QLineEdit(muzeRaterResultWizardPage);
        outputFilePathLineEdit->setObjectName(QString::fromUtf8("outputFilePathLineEdit"));
        outputFilePathLineEdit->setGeometry(QRect(20, 40, 711, 34));
        outputFilePathLineEdit->setFocusPolicy(Qt::ClickFocus);
        outputFilePathLineEdit->setReadOnly(true);
        outputFilePathLabel = new QLabel(muzeRaterResultWizardPage);
        outputFilePathLabel->setObjectName(QString::fromUtf8("outputFilePathLabel"));
        outputFilePathLabel->setGeometry(QRect(20, 10, 611, 19));
        hasErrorLabel = new QLabel(muzeRaterResultWizardPage);
        hasErrorLabel->setObjectName(QString::fromUtf8("hasErrorLabel"));
        hasErrorLabel->setGeometry(QRect(20, 94, 341, 19));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        hasErrorLabel->setFont(font);
        QWidget::setTabOrder(showOutputFolderPushButton, launchOutputFilePushButton);
        QWidget::setTabOrder(launchOutputFilePushButton, outputFilePathLineEdit);

        retranslateUi(muzeRaterResultWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterResultWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterResultWizardPage)
    {
        muzeRaterResultWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterResultWizardPage", "WizardPage", nullptr));
        muzeRaterResultWizardPage->setTitle(QCoreApplication::translate("muzeRaterResultWizardPage", "Results", nullptr));
        muzeRaterResultWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterResultWizardPage", "The processing has finished. The file can be launched by the operating system's default application or viewed in a file manager.", nullptr));
        launchOutputFilePushButton->setText(QCoreApplication::translate("muzeRaterResultWizardPage", "Launch", nullptr));
        showOutputFolderPushButton->setText(QCoreApplication::translate("muzeRaterResultWizardPage", "Show Folder", nullptr));
        outputFilePathLabel->setText(QCoreApplication::translate("muzeRaterResultWizardPage", "File was saved to:", nullptr));
        hasErrorLabel->setText(QCoreApplication::translate("muzeRaterResultWizardPage", "Errors occurred during the processing.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterResultWizardPage: public Ui_muzeRaterResultWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERRESULTWIZARDPAGE_H
