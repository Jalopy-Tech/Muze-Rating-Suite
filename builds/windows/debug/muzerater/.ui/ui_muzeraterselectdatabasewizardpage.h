/********************************************************************************
** Form generated from reading UI file 'muzeraterselectdatabasewizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERSELECTDATABASEWIZARDPAGE_H
#define UI_MUZERATERSELECTDATABASEWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterSelectDatabaseWizardPage
{
public:
    QTextBrowser *welcomeTextBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *selectDatabaseVerticalLayout;
    QRadioButton *iTunesRadioButton;
    QRadioButton *foobar2000RadioButton;

    void setupUi(QWizardPage *muzeRaterSelectDatabaseWizardPage)
    {
        if (muzeRaterSelectDatabaseWizardPage->objectName().isEmpty())
            muzeRaterSelectDatabaseWizardPage->setObjectName(QString::fromUtf8("muzeRaterSelectDatabaseWizardPage"));
        muzeRaterSelectDatabaseWizardPage->resize(920, 275);
        muzeRaterSelectDatabaseWizardPage->setAutoFillBackground(false);
        welcomeTextBrowser = new QTextBrowser(muzeRaterSelectDatabaseWizardPage);
        welcomeTextBrowser->setObjectName(QString::fromUtf8("welcomeTextBrowser"));
        welcomeTextBrowser->setEnabled(true);
        welcomeTextBrowser->setGeometry(QRect(30, 30, 391, 191));
        welcomeTextBrowser->setFocusPolicy(Qt::TabFocus);
        welcomeTextBrowser->setFrameShape(QFrame::Box);
        layoutWidget = new QWidget(muzeRaterSelectDatabaseWizardPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 30, 411, 101));
        selectDatabaseVerticalLayout = new QVBoxLayout(layoutWidget);
        selectDatabaseVerticalLayout->setObjectName(QString::fromUtf8("selectDatabaseVerticalLayout"));
        selectDatabaseVerticalLayout->setContentsMargins(0, 0, 0, 0);
        iTunesRadioButton = new QRadioButton(layoutWidget);
        iTunesRadioButton->setObjectName(QString::fromUtf8("iTunesRadioButton"));
        iTunesRadioButton->setEnabled(true);
        iTunesRadioButton->setChecked(true);

        selectDatabaseVerticalLayout->addWidget(iTunesRadioButton);

        foobar2000RadioButton = new QRadioButton(layoutWidget);
        foobar2000RadioButton->setObjectName(QString::fromUtf8("foobar2000RadioButton"));
        foobar2000RadioButton->setChecked(false);

        selectDatabaseVerticalLayout->addWidget(foobar2000RadioButton);

        QWidget::setTabOrder(iTunesRadioButton, foobar2000RadioButton);
        QWidget::setTabOrder(foobar2000RadioButton, welcomeTextBrowser);

        retranslateUi(muzeRaterSelectDatabaseWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterSelectDatabaseWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterSelectDatabaseWizardPage)
    {
        muzeRaterSelectDatabaseWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterSelectDatabaseWizardPage", "WizardPage", nullptr));
        muzeRaterSelectDatabaseWizardPage->setTitle(QCoreApplication::translate("muzeRaterSelectDatabaseWizardPage", "Select the Music Database", nullptr));
        muzeRaterSelectDatabaseWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterSelectDatabaseWizardPage", "Select the source database type for album information to be read from.", nullptr));
        welcomeTextBrowser->setHtml(QCoreApplication::translate("muzeRaterSelectDatabaseWizardPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Welcome to the <span style=\" font-weight:600;\">Muze Rater</span></p></body></html>", nullptr));
        iTunesRadioButton->setText(QCoreApplication::translate("muzeRaterSelectDatabaseWizardPage", "iTunes Music Library", nullptr));
        foobar2000RadioButton->setText(QCoreApplication::translate("muzeRaterSelectDatabaseWizardPage", "foobar2000 Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterSelectDatabaseWizardPage: public Ui_muzeRaterSelectDatabaseWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERSELECTDATABASEWIZARDPAGE_H
