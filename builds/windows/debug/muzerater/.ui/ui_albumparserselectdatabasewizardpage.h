/********************************************************************************
** Form generated from reading UI file 'albumparserselectdatabasewizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMPARSERSELECTDATABASEWIZARDPAGE_H
#define UI_ALBUMPARSERSELECTDATABASEWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_albumParserSelectDatabaseWizardPage
{
public:
    QTextBrowser *welcomeTextBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *iTunesRadioButton;
    QRadioButton *foobar2000RadioButton;

    void setupUi(QWizardPage *albumParserSelectDatabaseWizardPage)
    {
        if (albumParserSelectDatabaseWizardPage->objectName().isEmpty())
            albumParserSelectDatabaseWizardPage->setObjectName(QString::fromUtf8("albumParserSelectDatabaseWizardPage"));
        albumParserSelectDatabaseWizardPage->resize(920, 275);
        albumParserSelectDatabaseWizardPage->setAutoFillBackground(false);
        welcomeTextBrowser = new QTextBrowser(albumParserSelectDatabaseWizardPage);
        welcomeTextBrowser->setObjectName(QString::fromUtf8("welcomeTextBrowser"));
        welcomeTextBrowser->setEnabled(true);
        welcomeTextBrowser->setGeometry(QRect(30, 30, 391, 191));
        welcomeTextBrowser->setFocusPolicy(Qt::TabFocus);
        welcomeTextBrowser->setFrameShape(QFrame::Box);
        layoutWidget = new QWidget(albumParserSelectDatabaseWizardPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 30, 411, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        iTunesRadioButton = new QRadioButton(layoutWidget);
        iTunesRadioButton->setObjectName(QString::fromUtf8("iTunesRadioButton"));
        iTunesRadioButton->setEnabled(true);
        iTunesRadioButton->setChecked(true);

        verticalLayout->addWidget(iTunesRadioButton);

        foobar2000RadioButton = new QRadioButton(layoutWidget);
        foobar2000RadioButton->setObjectName(QString::fromUtf8("foobar2000RadioButton"));
        foobar2000RadioButton->setChecked(false);

        verticalLayout->addWidget(foobar2000RadioButton);

        QWidget::setTabOrder(iTunesRadioButton, foobar2000RadioButton);
        QWidget::setTabOrder(foobar2000RadioButton, welcomeTextBrowser);

        retranslateUi(albumParserSelectDatabaseWizardPage);

        QMetaObject::connectSlotsByName(albumParserSelectDatabaseWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *albumParserSelectDatabaseWizardPage)
    {
        albumParserSelectDatabaseWizardPage->setWindowTitle(QCoreApplication::translate("albumParserSelectDatabaseWizardPage", "WizardPage", nullptr));
        albumParserSelectDatabaseWizardPage->setTitle(QCoreApplication::translate("albumParserSelectDatabaseWizardPage", "Select the Music Database", nullptr));
        albumParserSelectDatabaseWizardPage->setSubTitle(QCoreApplication::translate("albumParserSelectDatabaseWizardPage", "Select the source database type for album information to be read from.", nullptr));
        welcomeTextBrowser->setHtml(QCoreApplication::translate("albumParserSelectDatabaseWizardPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Welcome to the <span style=\" font-weight:600;\">Muze Rater</span></p></body></html>", nullptr));
        iTunesRadioButton->setText(QCoreApplication::translate("albumParserSelectDatabaseWizardPage", "iTunes Music Library", nullptr));
        foobar2000RadioButton->setText(QCoreApplication::translate("albumParserSelectDatabaseWizardPage", "foobar2000 Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumParserSelectDatabaseWizardPage: public Ui_albumParserSelectDatabaseWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMPARSERSELECTDATABASEWIZARDPAGE_H
