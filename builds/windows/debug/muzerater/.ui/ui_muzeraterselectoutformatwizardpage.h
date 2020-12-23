/********************************************************************************
** Form generated from reading UI file 'muzeraterselectoutformatwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERSELECTOUTFORMATWIZARDPAGE_H
#define UI_MUZERATERSELECTOUTFORMATWIZARDPAGE_H

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

class Ui_muzeRaterSelectOutFormatWizardPage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *displayWebpageReportRadioButton;
    QRadioButton *saveWebpageReportRadioButton;
    QRadioButton *saveXMLDataFileRadioButton;
    QRadioButton *saveCSVDataFileRadioButton;
    QPushButton *outputSaveAsFilePathBrowsePushButton;
    QLineEdit *outputSaveAsFilePathLineEdit;
    QLabel *outputSaveAsFilePathLabel;
    QCheckBox *isOutputValidCheckBox;

    void setupUi(QWizardPage *muzeRaterSelectOutFormatWizardPage)
    {
        if (muzeRaterSelectOutFormatWizardPage->objectName().isEmpty())
            muzeRaterSelectOutFormatWizardPage->setObjectName(QString::fromUtf8("muzeRaterSelectOutFormatWizardPage"));
        muzeRaterSelectOutFormatWizardPage->resize(878, 292);
        muzeRaterSelectOutFormatWizardPage->setAutoFillBackground(false);
        layoutWidget = new QWidget(muzeRaterSelectOutFormatWizardPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 161));
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

        saveCSVDataFileRadioButton = new QRadioButton(layoutWidget);
        saveCSVDataFileRadioButton->setObjectName(QString::fromUtf8("saveCSVDataFileRadioButton"));
        saveCSVDataFileRadioButton->setEnabled(true);

        verticalLayout->addWidget(saveCSVDataFileRadioButton);

        outputSaveAsFilePathBrowsePushButton = new QPushButton(muzeRaterSelectOutFormatWizardPage);
        outputSaveAsFilePathBrowsePushButton->setObjectName(QString::fromUtf8("outputSaveAsFilePathBrowsePushButton"));
        outputSaveAsFilePathBrowsePushButton->setGeometry(QRect(740, 210, 112, 34));
        outputSaveAsFilePathLineEdit = new QLineEdit(muzeRaterSelectOutFormatWizardPage);
        outputSaveAsFilePathLineEdit->setObjectName(QString::fromUtf8("outputSaveAsFilePathLineEdit"));
        outputSaveAsFilePathLineEdit->setGeometry(QRect(10, 215, 711, 25));
        outputSaveAsFilePathLabel = new QLabel(muzeRaterSelectOutFormatWizardPage);
        outputSaveAsFilePathLabel->setObjectName(QString::fromUtf8("outputSaveAsFilePathLabel"));
        outputSaveAsFilePathLabel->setGeometry(QRect(10, 190, 611, 19));
        isOutputValidCheckBox = new QCheckBox(muzeRaterSelectOutFormatWizardPage);
        isOutputValidCheckBox->setObjectName(QString::fromUtf8("isOutputValidCheckBox"));
        isOutputValidCheckBox->setEnabled(true);
        isOutputValidCheckBox->setGeometry(QRect(680, 10, 101, 23));
        isOutputValidCheckBox->setFocusPolicy(Qt::NoFocus);
        isOutputValidCheckBox->setChecked(false);
        QWidget::setTabOrder(displayWebpageReportRadioButton, saveWebpageReportRadioButton);
        QWidget::setTabOrder(saveWebpageReportRadioButton, saveXMLDataFileRadioButton);
        QWidget::setTabOrder(saveXMLDataFileRadioButton, saveCSVDataFileRadioButton);
        QWidget::setTabOrder(saveCSVDataFileRadioButton, outputSaveAsFilePathLineEdit);
        QWidget::setTabOrder(outputSaveAsFilePathLineEdit, outputSaveAsFilePathBrowsePushButton);

        retranslateUi(muzeRaterSelectOutFormatWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterSelectOutFormatWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterSelectOutFormatWizardPage)
    {
        muzeRaterSelectOutFormatWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "WizardPage", nullptr));
        muzeRaterSelectOutFormatWizardPage->setTitle(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "Select the output format", nullptr));
        muzeRaterSelectOutFormatWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "Select the type of output to create. Displaying the report will create a temporary webpage displayed in your web browser. Data files can be saved in order to import data into other applications such a spreasheet program or database application.", nullptr));
        displayWebpageReportRadioButton->setText(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "Display a webpage report (HTML).", nullptr));
        saveWebpageReportRadioButton->setText(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "Save and display a webpage report (HTML).", nullptr));
        saveXMLDataFileRadioButton->setText(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "Save an XML data file.", nullptr));
        saveCSVDataFileRadioButton->setText(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "Save a comma seperated value (CSV) data file.", nullptr));
        outputSaveAsFilePathBrowsePushButton->setText(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "Browse", nullptr));
        outputSaveAsFilePathLabel->setText(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "Save file as:", nullptr));
        isOutputValidCheckBox->setText(QCoreApplication::translate("muzeRaterSelectOutFormatWizardPage", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterSelectOutFormatWizardPage: public Ui_muzeRaterSelectOutFormatWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERSELECTOUTFORMATWIZARDPAGE_H
