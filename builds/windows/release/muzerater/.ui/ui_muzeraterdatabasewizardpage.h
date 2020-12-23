/********************************************************************************
** Form generated from reading UI file 'muzeraterdatabasewizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERDATABASEWIZARDPAGE_H
#define UI_MUZERATERDATABASEWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterDatabaseWizardPage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *selectDatabaseVerticalLayout;
    QRadioButton *iTunesRadioButton;
    QRadioButton *foobar2000RadioButton;
    QLabel *label;

    void setupUi(QWizardPage *muzeRaterDatabaseWizardPage)
    {
        if (muzeRaterDatabaseWizardPage->objectName().isEmpty())
            muzeRaterDatabaseWizardPage->setObjectName(QString::fromUtf8("muzeRaterDatabaseWizardPage"));
        muzeRaterDatabaseWizardPage->resize(920, 317);
        layoutWidget = new QWidget(muzeRaterDatabaseWizardPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 491, 111));
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

        label = new QLabel(muzeRaterDatabaseWizardPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 361, 19));

        retranslateUi(muzeRaterDatabaseWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterDatabaseWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterDatabaseWizardPage)
    {
        muzeRaterDatabaseWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterDatabaseWizardPage", "WizardPage", nullptr));
        muzeRaterDatabaseWizardPage->setTitle(QCoreApplication::translate("muzeRaterDatabaseWizardPage", "Music Database Type", nullptr));
        muzeRaterDatabaseWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterDatabaseWizardPage", "Select the music database type for album information to be read from.", nullptr));
        iTunesRadioButton->setText(QCoreApplication::translate("muzeRaterDatabaseWizardPage", "iTunes Music Library", nullptr));
        foobar2000RadioButton->setText(QCoreApplication::translate("muzeRaterDatabaseWizardPage", "foobar2000 Database", nullptr));
        label->setText(QCoreApplication::translate("muzeRaterDatabaseWizardPage", "Database type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterDatabaseWizardPage: public Ui_muzeRaterDatabaseWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERDATABASEWIZARDPAGE_H
