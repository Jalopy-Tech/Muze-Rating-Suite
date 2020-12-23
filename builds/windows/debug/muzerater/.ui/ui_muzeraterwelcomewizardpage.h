/********************************************************************************
** Form generated from reading UI file 'muzeraterwelcomewizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERWELCOMEWIZARDPAGE_H
#define UI_MUZERATERWELCOMEWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterWelcomeWizardPage
{
public:
    QLabel *versionLabel;
    QTextBrowser *welcomeTextBrowser;

    void setupUi(QWizardPage *muzeRaterWelcomeWizardPage)
    {
        if (muzeRaterWelcomeWizardPage->objectName().isEmpty())
            muzeRaterWelcomeWizardPage->setObjectName(QString::fromUtf8("muzeRaterWelcomeWizardPage"));
        muzeRaterWelcomeWizardPage->resize(765, 353);
        versionLabel = new QLabel(muzeRaterWelcomeWizardPage);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setGeometry(QRect(40, 320, 221, 20));
        versionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        welcomeTextBrowser = new QTextBrowser(muzeRaterWelcomeWizardPage);
        welcomeTextBrowser->setObjectName(QString::fromUtf8("welcomeTextBrowser"));
        welcomeTextBrowser->setEnabled(true);
        welcomeTextBrowser->setGeometry(QRect(40, 10, 621, 301));
        welcomeTextBrowser->setFocusPolicy(Qt::ClickFocus);
        welcomeTextBrowser->setFrameShape(QFrame::NoFrame);
        welcomeTextBrowser->setAcceptRichText(false);
        welcomeTextBrowser->setOpenExternalLinks(true);

        retranslateUi(muzeRaterWelcomeWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterWelcomeWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterWelcomeWizardPage)
    {
        muzeRaterWelcomeWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterWelcomeWizardPage", "WizardPage", nullptr));
        versionLabel->setText(QCoreApplication::translate("muzeRaterWelcomeWizardPage", "Version 1.0.0", nullptr));
        welcomeTextBrowser->setHtml(QCoreApplication::translate("muzeRaterWelcomeWizardPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Welcome to the Muze Rater</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterWelcomeWizardPage: public Ui_muzeRaterWelcomeWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERWELCOMEWIZARDPAGE_H
