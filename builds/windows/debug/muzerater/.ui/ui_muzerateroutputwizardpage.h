/********************************************************************************
** Form generated from reading UI file 'muzerateroutputwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATEROUTPUTWIZARDPAGE_H
#define UI_MUZERATEROUTPUTWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterOutputWizardPage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *displayWebpageReportRadioButton;
    QRadioButton *saveWebpageReportRadioButton;
    QRadioButton *saveXMLDataFileRadioButton;
    QPushButton *outputSaveAsFilePathBrowsePushButton;
    QLineEdit *outputSaveAsFilePathLineEdit;
    QLabel *outputSaveAsFilePathLabel;
    QCheckBox *isOutputValidCheckBox;

    void setupUi(QWizardPage *muzeRaterOutputWizardPage)
    {
        if (muzeRaterOutputWizardPage->objectName().isEmpty())
            muzeRaterOutputWizardPage->setObjectName(QString::fromUtf8("muzeRaterOutputWizardPage"));
        muzeRaterOutputWizardPage->resize(921, 287);
        layoutWidget = new QWidget(muzeRaterOutputWizardPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        displayWebpageReportRadioButton = new QRadioButton(layoutWidget);
        displayWebpageReportRadioButton->setObjectName(QString::fromUtf8("displayWebpageReportRadioButton"));
        displayWebpageReportRadioButton->setChecked(true);

        verticalLayout->addWidget(displayWebpageReportRadioButton);

        saveWebpageReportRadioButton = new QRadioButton(layoutWidget);
        saveWebpageReportRadioButton->setObjectName(QString::fromUtf8("saveWebpageReportRadioButton"));
        saveWebpageReportRadioButton->setEnabled(true);

        verticalLayout->addWidget(saveWebpageReportRadioButton);

        saveXMLDataFileRadioButton = new QRadioButton(layoutWidget);
        saveXMLDataFileRadioButton->setObjectName(QString::fromUtf8("saveXMLDataFileRadioButton"));
        saveXMLDataFileRadioButton->setEnabled(true);

        verticalLayout->addWidget(saveXMLDataFileRadioButton);

        outputSaveAsFilePathBrowsePushButton = new QPushButton(muzeRaterOutputWizardPage);
        outputSaveAsFilePathBrowsePushButton->setObjectName(QString::fromUtf8("outputSaveAsFilePathBrowsePushButton"));
        outputSaveAsFilePathBrowsePushButton->setGeometry(QRect(740, 174, 112, 34));
        outputSaveAsFilePathLineEdit = new QLineEdit(muzeRaterOutputWizardPage);
        outputSaveAsFilePathLineEdit->setObjectName(QString::fromUtf8("outputSaveAsFilePathLineEdit"));
        outputSaveAsFilePathLineEdit->setGeometry(QRect(10, 175, 711, 34));
        outputSaveAsFilePathLabel = new QLabel(muzeRaterOutputWizardPage);
        outputSaveAsFilePathLabel->setObjectName(QString::fromUtf8("outputSaveAsFilePathLabel"));
        outputSaveAsFilePathLabel->setGeometry(QRect(10, 150, 611, 19));
        isOutputValidCheckBox = new QCheckBox(muzeRaterOutputWizardPage);
        isOutputValidCheckBox->setObjectName(QString::fromUtf8("isOutputValidCheckBox"));
        isOutputValidCheckBox->setEnabled(true);
        isOutputValidCheckBox->setGeometry(QRect(680, 10, 101, 23));
        isOutputValidCheckBox->setFocusPolicy(Qt::NoFocus);
        isOutputValidCheckBox->setChecked(false);
        QWidget::setTabOrder(displayWebpageReportRadioButton, saveWebpageReportRadioButton);
        QWidget::setTabOrder(saveWebpageReportRadioButton, saveXMLDataFileRadioButton);
        QWidget::setTabOrder(saveXMLDataFileRadioButton, outputSaveAsFilePathLineEdit);
        QWidget::setTabOrder(outputSaveAsFilePathLineEdit, outputSaveAsFilePathBrowsePushButton);

        retranslateUi(muzeRaterOutputWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterOutputWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterOutputWizardPage)
    {
        muzeRaterOutputWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterOutputWizardPage", "WizardPage", nullptr));
        muzeRaterOutputWizardPage->setTitle(QCoreApplication::translate("muzeRaterOutputWizardPage", "Output format", nullptr));
        muzeRaterOutputWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterOutputWizardPage", "Select the type of output to create. Displaying the report will create a temporary webpage displayed in your web browser. Data files can be saved in order to import data into other applications such a spreasheet program or database application.", nullptr));
        displayWebpageReportRadioButton->setText(QCoreApplication::translate("muzeRaterOutputWizardPage", "Display a webpage report (HTML).", nullptr));
        saveWebpageReportRadioButton->setText(QCoreApplication::translate("muzeRaterOutputWizardPage", "Save and display a webpage report (HTML).", nullptr));
        saveXMLDataFileRadioButton->setText(QCoreApplication::translate("muzeRaterOutputWizardPage", "Save an XML data file.", nullptr));
        outputSaveAsFilePathBrowsePushButton->setText(QCoreApplication::translate("muzeRaterOutputWizardPage", "Browse", nullptr));
        outputSaveAsFilePathLabel->setText(QCoreApplication::translate("muzeRaterOutputWizardPage", "Save file as:", nullptr));
        isOutputValidCheckBox->setText(QCoreApplication::translate("muzeRaterOutputWizardPage", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterOutputWizardPage: public Ui_muzeRaterOutputWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATEROUTPUTWIZARDPAGE_H
