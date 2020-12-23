/********************************************************************************
** Form generated from reading UI file 'muzeraterwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERWIZARD_H
#define UI_MUZERATERWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWizard>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterWizard
{
public:

    void setupUi(QWizard *muzeRaterWizard)
    {
        if (muzeRaterWizard->objectName().isEmpty())
            muzeRaterWizard->setObjectName(QString::fromUtf8("muzeRaterWizard"));
        muzeRaterWizard->setEnabled(true);
        muzeRaterWizard->resize(1007, 440);
        muzeRaterWizard->setModal(true);
        muzeRaterWizard->setWizardStyle(QWizard::ModernStyle);
        muzeRaterWizard->setOptions(QWizard::HaveHelpButton|QWizard::IndependentPages|QWizard::NoBackButtonOnLastPage|QWizard::NoCancelButtonOnLastPage);

        retranslateUi(muzeRaterWizard);

        QMetaObject::connectSlotsByName(muzeRaterWizard);
    } // setupUi

    void retranslateUi(QWizard *muzeRaterWizard)
    {
        muzeRaterWizard->setWindowTitle(QCoreApplication::translate("muzeRaterWizard", "Muze Rater", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterWizard: public Ui_muzeRaterWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERWIZARD_H
