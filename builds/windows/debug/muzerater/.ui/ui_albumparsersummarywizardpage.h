/********************************************************************************
** Form generated from reading UI file 'albumparsersummarywizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMPARSERSUMMARYWIZARDPAGE_H
#define UI_ALBUMPARSERSUMMARYWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_albumParserSummaryWizardPage
{
public:
    QTextBrowser *summaryTextBrowser;

    void setupUi(QWizardPage *albumParserSummaryWizardPage)
    {
        if (albumParserSummaryWizardPage->objectName().isEmpty())
            albumParserSummaryWizardPage->setObjectName(QString::fromUtf8("albumParserSummaryWizardPage"));
        albumParserSummaryWizardPage->resize(980, 325);
        albumParserSummaryWizardPage->setAutoFillBackground(false);
        summaryTextBrowser = new QTextBrowser(albumParserSummaryWizardPage);
        summaryTextBrowser->setObjectName(QString::fromUtf8("summaryTextBrowser"));
        summaryTextBrowser->setGeometry(QRect(10, 10, 821, 251));
        summaryTextBrowser->setFocusPolicy(Qt::TabFocus);
        summaryTextBrowser->setFrameShape(QFrame::Panel);

        retranslateUi(albumParserSummaryWizardPage);

        QMetaObject::connectSlotsByName(albumParserSummaryWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *albumParserSummaryWizardPage)
    {
        albumParserSummaryWizardPage->setWindowTitle(QCoreApplication::translate("albumParserSummaryWizardPage", "WizardPage", nullptr));
        albumParserSummaryWizardPage->setTitle(QCoreApplication::translate("albumParserSummaryWizardPage", "Summary of settings", nullptr));
        albumParserSummaryWizardPage->setSubTitle(QCoreApplication::translate("albumParserSummaryWizardPage", "Check that correct options have been set. Click \"Create\" to create the report/data or click 'Back' to change any option settings.", nullptr));
        summaryTextBrowser->setHtml(QCoreApplication::translate("albumParserSummaryWizardPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumParserSummaryWizardPage: public Ui_albumParserSummaryWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMPARSERSUMMARYWIZARDPAGE_H
