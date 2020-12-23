/********************************************************************************
** Form generated from reading UI file 'muzeraterlastwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERLASTWIZARDPAGE_H
#define UI_MUZERATERLASTWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterLastWizardPage
{
public:
    QPushButton *launchOutputPushButton;
    QPushButton *showOutputFolderPushButton;
    QLineEdit *outputFilePathLineEdit;
    QLabel *outputFilePathLabel;
    QLabel *hasErrorLabel;

    void setupUi(QWizardPage *muzeRaterLastWizardPage)
    {
        if (muzeRaterLastWizardPage->objectName().isEmpty())
            muzeRaterLastWizardPage->setObjectName(QString::fromUtf8("muzeRaterLastWizardPage"));
        muzeRaterLastWizardPage->resize(1036, 205);
        muzeRaterLastWizardPage->setAutoFillBackground(false);
        launchOutputPushButton = new QPushButton(muzeRaterLastWizardPage);
        launchOutputPushButton->setObjectName(QString::fromUtf8("launchOutputPushButton"));
        launchOutputPushButton->setGeometry(QRect(560, 80, 171, 34));
        launchOutputPushButton->setFocusPolicy(Qt::TabFocus);
        launchOutputPushButton->setAutoFillBackground(false);
        showOutputFolderPushButton = new QPushButton(muzeRaterLastWizardPage);
        showOutputFolderPushButton->setObjectName(QString::fromUtf8("showOutputFolderPushButton"));
        showOutputFolderPushButton->setGeometry(QRect(370, 80, 171, 34));
        showOutputFolderPushButton->setFocusPolicy(Qt::TabFocus);
        outputFilePathLineEdit = new QLineEdit(muzeRaterLastWizardPage);
        outputFilePathLineEdit->setObjectName(QString::fromUtf8("outputFilePathLineEdit"));
        outputFilePathLineEdit->setGeometry(QRect(20, 40, 711, 25));
        outputFilePathLineEdit->setFocusPolicy(Qt::TabFocus);
        outputFilePathLineEdit->setReadOnly(true);
        outputFilePathLabel = new QLabel(muzeRaterLastWizardPage);
        outputFilePathLabel->setObjectName(QString::fromUtf8("outputFilePathLabel"));
        outputFilePathLabel->setGeometry(QRect(20, 10, 611, 19));
        hasErrorLabel = new QLabel(muzeRaterLastWizardPage);
        hasErrorLabel->setObjectName(QString::fromUtf8("hasErrorLabel"));
        hasErrorLabel->setGeometry(QRect(20, 90, 341, 19));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        hasErrorLabel->setFont(font);
        QWidget::setTabOrder(showOutputFolderPushButton, launchOutputPushButton);
        QWidget::setTabOrder(launchOutputPushButton, outputFilePathLineEdit);

        retranslateUi(muzeRaterLastWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterLastWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterLastWizardPage)
    {
        muzeRaterLastWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterLastWizardPage", "WizardPage", nullptr));
        muzeRaterLastWizardPage->setTitle(QCoreApplication::translate("muzeRaterLastWizardPage", "Processing Finished", nullptr));
        muzeRaterLastWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterLastWizardPage", "The processing has been completed.", nullptr));
        launchOutputPushButton->setText(QCoreApplication::translate("muzeRaterLastWizardPage", "Launch", nullptr));
        showOutputFolderPushButton->setText(QCoreApplication::translate("muzeRaterLastWizardPage", "Show Folder", nullptr));
        outputFilePathLabel->setText(QCoreApplication::translate("muzeRaterLastWizardPage", "File was saved to:", nullptr));
        hasErrorLabel->setText(QCoreApplication::translate("muzeRaterLastWizardPage", "Errors occurred during the processing.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterLastWizardPage: public Ui_muzeRaterLastWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERLASTWIZARDPAGE_H
