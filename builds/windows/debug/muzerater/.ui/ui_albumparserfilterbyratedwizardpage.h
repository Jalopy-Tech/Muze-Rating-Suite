/********************************************************************************
** Form generated from reading UI file 'albumparserfilterbyratedwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMPARSERFILTERBYRATEDWIZARDPAGE_H
#define UI_ALBUMPARSERFILTERBYRATEDWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_albumParserFilterByRatedWizardPage
{
public:
    QLineEdit *summaryLineEdit;
    QSpinBox *maxRatedTracksFilterSpinBox;
    QCheckBox *hasMaxRatedTracksFilterCheckBox;
    QSpinBox *minRatedTracksFilterSpinBox;
    QLabel *minRatedTracksFilterLabel;

    void setupUi(QWizardPage *albumParserFilterByRatedWizardPage)
    {
        if (albumParserFilterByRatedWizardPage->objectName().isEmpty())
            albumParserFilterByRatedWizardPage->setObjectName(QString::fromUtf8("albumParserFilterByRatedWizardPage"));
        albumParserFilterByRatedWizardPage->resize(745, 230);
        albumParserFilterByRatedWizardPage->setAutoFillBackground(false);
        summaryLineEdit = new QLineEdit(albumParserFilterByRatedWizardPage);
        summaryLineEdit->setObjectName(QString::fromUtf8("summaryLineEdit"));
        summaryLineEdit->setGeometry(QRect(450, 140, 113, 25));
        summaryLineEdit->setFocusPolicy(Qt::NoFocus);
        maxRatedTracksFilterSpinBox = new QSpinBox(albumParserFilterByRatedWizardPage);
        maxRatedTracksFilterSpinBox->setObjectName(QString::fromUtf8("maxRatedTracksFilterSpinBox"));
        maxRatedTracksFilterSpinBox->setEnabled(false);
        maxRatedTracksFilterSpinBox->setGeometry(QRect(620, 80, 46, 36));
        maxRatedTracksFilterSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxRatedTracksFilterSpinBox->setMinimum(0);
        maxRatedTracksFilterSpinBox->setMaximum(999);
        maxRatedTracksFilterSpinBox->setValue(1);
        hasMaxRatedTracksFilterCheckBox = new QCheckBox(albumParserFilterByRatedWizardPage);
        hasMaxRatedTracksFilterCheckBox->setObjectName(QString::fromUtf8("hasMaxRatedTracksFilterCheckBox"));
        hasMaxRatedTracksFilterCheckBox->setGeometry(QRect(20, 90, 551, 23));
        minRatedTracksFilterSpinBox = new QSpinBox(albumParserFilterByRatedWizardPage);
        minRatedTracksFilterSpinBox->setObjectName(QString::fromUtf8("minRatedTracksFilterSpinBox"));
        minRatedTracksFilterSpinBox->setGeometry(QRect(620, 10, 46, 36));
        minRatedTracksFilterSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minRatedTracksFilterSpinBox->setMinimum(0);
        minRatedTracksFilterSpinBox->setMaximum(999);
        minRatedTracksFilterSpinBox->setValue(1);
        minRatedTracksFilterLabel = new QLabel(albumParserFilterByRatedWizardPage);
        minRatedTracksFilterLabel->setObjectName(QString::fromUtf8("minRatedTracksFilterLabel"));
        minRatedTracksFilterLabel->setGeometry(QRect(30, 20, 491, 19));
        QWidget::setTabOrder(minRatedTracksFilterSpinBox, hasMaxRatedTracksFilterCheckBox);
        QWidget::setTabOrder(hasMaxRatedTracksFilterCheckBox, maxRatedTracksFilterSpinBox);
        QWidget::setTabOrder(maxRatedTracksFilterSpinBox, summaryLineEdit);

        retranslateUi(albumParserFilterByRatedWizardPage);

        QMetaObject::connectSlotsByName(albumParserFilterByRatedWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *albumParserFilterByRatedWizardPage)
    {
        albumParserFilterByRatedWizardPage->setWindowTitle(QCoreApplication::translate("albumParserFilterByRatedWizardPage", "WizardPage", nullptr));
        albumParserFilterByRatedWizardPage->setTitle(QCoreApplication::translate("albumParserFilterByRatedWizardPage", "Filter albums by rated tracks", nullptr));
        albumParserFilterByRatedWizardPage->setSubTitle(QCoreApplication::translate("albumParserFilterByRatedWizardPage", "Set a minimum and, optionally, a maximum number of rated tracks. A minimum of \"1\"  excludes albums with no rated tracks. A maximum of \"0\" includes only albums with no rated tracks (this might be useful to see which albums have not been rated).", nullptr));
        hasMaxRatedTracksFilterCheckBox->setText(QCoreApplication::translate("albumParserFilterByRatedWizardPage", "Also, only include albums with a maximum number of rated tracks of", nullptr));
        minRatedTracksFilterLabel->setText(QCoreApplication::translate("albumParserFilterByRatedWizardPage", "Only include albums with a minimum number of rated tracks of", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumParserFilterByRatedWizardPage: public Ui_albumParserFilterByRatedWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMPARSERFILTERBYRATEDWIZARDPAGE_H
