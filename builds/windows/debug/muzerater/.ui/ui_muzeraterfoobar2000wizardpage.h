/********************************************************************************
** Form generated from reading UI file 'muzeraterfoobar2000wizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERFOOBAR2000WIZARDPAGE_H
#define UI_MUZERATERFOOBAR2000WIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterFoobar2000WizardPage
{
public:
    QCheckBox *foobar2000ClipboardCheckedCheckBox;
    QCheckBox *isFoobar2000ValidCheckBox;

    void setupUi(QWizardPage *muzeRaterFoobar2000WizardPage)
    {
        if (muzeRaterFoobar2000WizardPage->objectName().isEmpty())
            muzeRaterFoobar2000WizardPage->setObjectName(QString::fromUtf8("muzeRaterFoobar2000WizardPage"));
        muzeRaterFoobar2000WizardPage->resize(920, 294);
        muzeRaterFoobar2000WizardPage->setAutoFillBackground(false);
        foobar2000ClipboardCheckedCheckBox = new QCheckBox(muzeRaterFoobar2000WizardPage);
        foobar2000ClipboardCheckedCheckBox->setObjectName(QString::fromUtf8("foobar2000ClipboardCheckedCheckBox"));
        foobar2000ClipboardCheckedCheckBox->setGeometry(QRect(20, 20, 641, 23));
        isFoobar2000ValidCheckBox = new QCheckBox(muzeRaterFoobar2000WizardPage);
        isFoobar2000ValidCheckBox->setObjectName(QString::fromUtf8("isFoobar2000ValidCheckBox"));
        isFoobar2000ValidCheckBox->setEnabled(true);
        isFoobar2000ValidCheckBox->setGeometry(QRect(760, 10, 101, 23));
        isFoobar2000ValidCheckBox->setFocusPolicy(Qt::NoFocus);
        isFoobar2000ValidCheckBox->setChecked(false);

        retranslateUi(muzeRaterFoobar2000WizardPage);

        QMetaObject::connectSlotsByName(muzeRaterFoobar2000WizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterFoobar2000WizardPage)
    {
        muzeRaterFoobar2000WizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterFoobar2000WizardPage", "WizardPage", nullptr));
        muzeRaterFoobar2000WizardPage->setTitle(QCoreApplication::translate("muzeRaterFoobar2000WizardPage", "foobar2000 Database", nullptr));
        muzeRaterFoobar2000WizardPage->setSubTitle(QCoreApplication::translate("muzeRaterFoobar2000WizardPage", "In the foobar2000 application, execute the \"Album Rater\" SQL query and right click and select \"Copy All\" to copy the data to the clipboard. Then check the checkbox on this page to continue.", nullptr));
        foobar2000ClipboardCheckedCheckBox->setText(QCoreApplication::translate("muzeRaterFoobar2000WizardPage", "The Album Ratings SQL data has been copied from foobar2000 to the clipboard.", nullptr));
        isFoobar2000ValidCheckBox->setText(QCoreApplication::translate("muzeRaterFoobar2000WizardPage", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterFoobar2000WizardPage: public Ui_muzeRaterFoobar2000WizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERFOOBAR2000WIZARDPAGE_H
