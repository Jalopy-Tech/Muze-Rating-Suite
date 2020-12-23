/********************************************************************************
** Form generated from reading UI file 'albumparserprocesswizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMPARSERPROCESSWIZARDPAGE_H
#define UI_ALBUMPARSERPROCESSWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_albumParserProcessWizardPage
{
public:
    QProgressBar *progressBar;
    QLabel *progressLabel;

    void setupUi(QWizardPage *albumParserProcessWizardPage)
    {
        if (albumParserProcessWizardPage->objectName().isEmpty())
            albumParserProcessWizardPage->setObjectName(QString::fromUtf8("albumParserProcessWizardPage"));
        albumParserProcessWizardPage->resize(815, 154);
        albumParserProcessWizardPage->setAutoFillBackground(false);
        progressBar = new QProgressBar(albumParserProcessWizardPage);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(30, 50, 751, 23));
        progressBar->setValue(0);
        progressLabel = new QLabel(albumParserProcessWizardPage);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));
        progressLabel->setGeometry(QRect(30, 20, 691, 19));

        retranslateUi(albumParserProcessWizardPage);

        QMetaObject::connectSlotsByName(albumParserProcessWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *albumParserProcessWizardPage)
    {
        albumParserProcessWizardPage->setWindowTitle(QCoreApplication::translate("albumParserProcessWizardPage", "WizardPage", nullptr));
        albumParserProcessWizardPage->setTitle(QCoreApplication::translate("albumParserProcessWizardPage", "Process Album Ratings", nullptr));
        albumParserProcessWizardPage->setSubTitle(QCoreApplication::translate("albumParserProcessWizardPage", "Calculates ratings for each album and creates the report/data file.", nullptr));
        progressLabel->setText(QCoreApplication::translate("albumParserProcessWizardPage", "Processing...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumParserProcessWizardPage: public Ui_albumParserProcessWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMPARSERPROCESSWIZARDPAGE_H
