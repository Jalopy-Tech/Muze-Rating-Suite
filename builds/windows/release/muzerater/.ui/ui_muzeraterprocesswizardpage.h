/********************************************************************************
** Form generated from reading UI file 'muzeraterprocesswizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERPROCESSWIZARDPAGE_H
#define UI_MUZERATERPROCESSWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterProcessWizardPage
{
public:
    QProgressBar *progressBar;
    QLabel *progressLabel;

    void setupUi(QWizardPage *muzeRaterProcessWizardPage)
    {
        if (muzeRaterProcessWizardPage->objectName().isEmpty())
            muzeRaterProcessWizardPage->setObjectName(QString::fromUtf8("muzeRaterProcessWizardPage"));
        muzeRaterProcessWizardPage->resize(815, 286);
        progressBar = new QProgressBar(muzeRaterProcessWizardPage);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(30, 50, 751, 23));
        progressBar->setValue(0);
        progressLabel = new QLabel(muzeRaterProcessWizardPage);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));
        progressLabel->setGeometry(QRect(30, 20, 691, 19));

        retranslateUi(muzeRaterProcessWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterProcessWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterProcessWizardPage)
    {
        muzeRaterProcessWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterProcessWizardPage", "WizardPage", nullptr));
        muzeRaterProcessWizardPage->setTitle(QCoreApplication::translate("muzeRaterProcessWizardPage", "Process", nullptr));
        muzeRaterProcessWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterProcessWizardPage", "Calculates ratings for each album and creates the report/data file.", nullptr));
        progressLabel->setText(QCoreApplication::translate("muzeRaterProcessWizardPage", "Processing...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterProcessWizardPage: public Ui_muzeRaterProcessWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERPROCESSWIZARDPAGE_H
