/********************************************************************************
** Form generated from reading UI file 'albumparserfoobar2000wizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMPARSERFOOBAR2000WIZARDPAGE_H
#define UI_ALBUMPARSERFOOBAR2000WIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_albumParserFoobar2000WizardPage
{
public:
    QCheckBox *clipboardCheckBox;

    void setupUi(QWizardPage *albumParserFoobar2000WizardPage)
    {
        if (albumParserFoobar2000WizardPage->objectName().isEmpty())
            albumParserFoobar2000WizardPage->setObjectName(QString::fromUtf8("albumParserFoobar2000WizardPage"));
        albumParserFoobar2000WizardPage->resize(920, 275);
        albumParserFoobar2000WizardPage->setAutoFillBackground(false);
        clipboardCheckBox = new QCheckBox(albumParserFoobar2000WizardPage);
        clipboardCheckBox->setObjectName(QString::fromUtf8("clipboardCheckBox"));
        clipboardCheckBox->setGeometry(QRect(20, 20, 641, 23));

        retranslateUi(albumParserFoobar2000WizardPage);

        QMetaObject::connectSlotsByName(albumParserFoobar2000WizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *albumParserFoobar2000WizardPage)
    {
        albumParserFoobar2000WizardPage->setWindowTitle(QCoreApplication::translate("albumParserFoobar2000WizardPage", "WizardPage", nullptr));
        albumParserFoobar2000WizardPage->setTitle(QCoreApplication::translate("albumParserFoobar2000WizardPage", "foobar2000 Database", nullptr));
        albumParserFoobar2000WizardPage->setSubTitle(QCoreApplication::translate("albumParserFoobar2000WizardPage", "In the foobar2000 application, execute the \"Album Rater\" SQL query and right click and select \"Copy All\" to copy the data to the clipboard. Then check the checkbox on this page to continue.", nullptr));
        clipboardCheckBox->setText(QCoreApplication::translate("albumParserFoobar2000WizardPage", "I have copied the Album Ratings SQL Data from foobar2000 to the clipboard.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumParserFoobar2000WizardPage: public Ui_albumParserFoobar2000WizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMPARSERFOOBAR2000WIZARDPAGE_H
