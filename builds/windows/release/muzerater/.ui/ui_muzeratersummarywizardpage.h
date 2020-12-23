/********************************************************************************
** Form generated from reading UI file 'muzeratersummarywizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERSUMMARYWIZARDPAGE_H
#define UI_MUZERATERSUMMARYWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterSummaryWizardPage
{
public:
    QTextBrowser *summaryTextBrowser;

    void setupUi(QWizardPage *muzeRaterSummaryWizardPage)
    {
        if (muzeRaterSummaryWizardPage->objectName().isEmpty())
            muzeRaterSummaryWizardPage->setObjectName(QString::fromUtf8("muzeRaterSummaryWizardPage"));
        muzeRaterSummaryWizardPage->resize(955, 287);
        summaryTextBrowser = new QTextBrowser(muzeRaterSummaryWizardPage);
        summaryTextBrowser->setObjectName(QString::fromUtf8("summaryTextBrowser"));
        summaryTextBrowser->setGeometry(QRect(10, 10, 921, 231));
        summaryTextBrowser->setFocusPolicy(Qt::ClickFocus);
        summaryTextBrowser->setFrameShape(QFrame::Panel);

        retranslateUi(muzeRaterSummaryWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterSummaryWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterSummaryWizardPage)
    {
        muzeRaterSummaryWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterSummaryWizardPage", "WizardPage", nullptr));
        muzeRaterSummaryWizardPage->setTitle(QCoreApplication::translate("muzeRaterSummaryWizardPage", "Summary", nullptr));
        muzeRaterSummaryWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterSummaryWizardPage", "Check that correct options have been set. Click \"Create\" to create the report/data or click 'Back' to change any option settings.", nullptr));
        summaryTextBrowser->setHtml(QCoreApplication::translate("muzeRaterSummaryWizardPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterSummaryWizardPage: public Ui_muzeRaterSummaryWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERSUMMARYWIZARDPAGE_H
