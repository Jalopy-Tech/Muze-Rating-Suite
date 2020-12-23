/********************************************************************************
** Form generated from reading UI file 'albumparserselectoutformatwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMPARSERSELECTOUTFORMATWIZARDPAGE_H
#define UI_ALBUMPARSERSELECTOUTFORMATWIZARDPAGE_H

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

class Ui_albumParserSelectOutFormatWizardPage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *displayWebpageReportRadioButton;
    QRadioButton *saveWebpageReportRadioButton;
    QRadioButton *saveXMLDataFileRadioButton;
    QRadioButton *saveCSVDataFileRadioButton;
    QPushButton *outSaveFileBrowsePushButton;
    QLineEdit *outSaveFilenameLineEdit;
    QLabel *outSaveFileLabel;
    QLineEdit *outFilenameLineEdit;
    QLineEdit *summaryLineEdit;
    QCheckBox *tempDirCheckBox;
    QLineEdit *outFormatLineEdit;

    void setupUi(QWizardPage *albumParserSelectOutFormatWizardPage)
    {
        if (albumParserSelectOutFormatWizardPage->objectName().isEmpty())
            albumParserSelectOutFormatWizardPage->setObjectName(QString::fromUtf8("albumParserSelectOutFormatWizardPage"));
        albumParserSelectOutFormatWizardPage->resize(878, 292);
        albumParserSelectOutFormatWizardPage->setAutoFillBackground(false);
        layoutWidget = new QWidget(albumParserSelectOutFormatWizardPage);
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

        outSaveFileBrowsePushButton = new QPushButton(albumParserSelectOutFormatWizardPage);
        outSaveFileBrowsePushButton->setObjectName(QString::fromUtf8("outSaveFileBrowsePushButton"));
        outSaveFileBrowsePushButton->setGeometry(QRect(740, 210, 112, 34));
        outSaveFilenameLineEdit = new QLineEdit(albumParserSelectOutFormatWizardPage);
        outSaveFilenameLineEdit->setObjectName(QString::fromUtf8("outSaveFilenameLineEdit"));
        outSaveFilenameLineEdit->setGeometry(QRect(10, 215, 711, 25));
        outSaveFileLabel = new QLabel(albumParserSelectOutFormatWizardPage);
        outSaveFileLabel->setObjectName(QString::fromUtf8("outSaveFileLabel"));
        outSaveFileLabel->setGeometry(QRect(10, 190, 611, 19));
        outFilenameLineEdit = new QLineEdit(albumParserSelectOutFormatWizardPage);
        outFilenameLineEdit->setObjectName(QString::fromUtf8("outFilenameLineEdit"));
        outFilenameLineEdit->setGeometry(QRect(420, 20, 121, 25));
        outFilenameLineEdit->setFocusPolicy(Qt::NoFocus);
        summaryLineEdit = new QLineEdit(albumParserSelectOutFormatWizardPage);
        summaryLineEdit->setObjectName(QString::fromUtf8("summaryLineEdit"));
        summaryLineEdit->setGeometry(QRect(420, 60, 113, 25));
        summaryLineEdit->setFocusPolicy(Qt::NoFocus);
        tempDirCheckBox = new QCheckBox(albumParserSelectOutFormatWizardPage);
        tempDirCheckBox->setObjectName(QString::fromUtf8("tempDirCheckBox"));
        tempDirCheckBox->setGeometry(QRect(430, 120, 101, 23));
        tempDirCheckBox->setFocusPolicy(Qt::NoFocus);
        outFormatLineEdit = new QLineEdit(albumParserSelectOutFormatWizardPage);
        outFormatLineEdit->setObjectName(QString::fromUtf8("outFormatLineEdit"));
        outFormatLineEdit->setGeometry(QRect(610, 40, 113, 25));
        outFormatLineEdit->setFocusPolicy(Qt::NoFocus);
        QWidget::setTabOrder(displayWebpageReportRadioButton, saveWebpageReportRadioButton);
        QWidget::setTabOrder(saveWebpageReportRadioButton, saveXMLDataFileRadioButton);
        QWidget::setTabOrder(saveXMLDataFileRadioButton, saveCSVDataFileRadioButton);
        QWidget::setTabOrder(saveCSVDataFileRadioButton, outSaveFilenameLineEdit);
        QWidget::setTabOrder(outSaveFilenameLineEdit, outSaveFileBrowsePushButton);

        retranslateUi(albumParserSelectOutFormatWizardPage);

        QMetaObject::connectSlotsByName(albumParserSelectOutFormatWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *albumParserSelectOutFormatWizardPage)
    {
        albumParserSelectOutFormatWizardPage->setWindowTitle(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "WizardPage", nullptr));
        albumParserSelectOutFormatWizardPage->setTitle(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "Select the output format", nullptr));
        albumParserSelectOutFormatWizardPage->setSubTitle(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "Select the type of output to create. Displaying the report will create a temporary webpage displayed in your web browser. Data files can be saved in order to import data into other applications such a spreasheet program or database application.", nullptr));
        displayWebpageReportRadioButton->setText(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "Display a webpage report (HTML).", nullptr));
        saveWebpageReportRadioButton->setText(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "Save and display a webpage report (HTML).", nullptr));
        saveXMLDataFileRadioButton->setText(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "Save an XML data file.", nullptr));
        saveCSVDataFileRadioButton->setText(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "Save a comma seperated value (CSV) data file.", nullptr));
        outSaveFileBrowsePushButton->setText(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "Browse", nullptr));
        outSaveFileLabel->setText(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "Save file as:", nullptr));
        tempDirCheckBox->setText(QCoreApplication::translate("albumParserSelectOutFormatWizardPage", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumParserSelectOutFormatWizardPage: public Ui_albumParserSelectOutFormatWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMPARSERSELECTOUTFORMATWIZARDPAGE_H
