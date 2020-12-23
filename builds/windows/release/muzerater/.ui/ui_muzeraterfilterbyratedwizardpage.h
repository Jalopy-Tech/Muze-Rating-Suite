/********************************************************************************
** Form generated from reading UI file 'muzeraterfilterbyratedwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERFILTERBYRATEDWIZARDPAGE_H
#define UI_MUZERATERFILTERBYRATEDWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterFilterByRatedWizardPage
{
public:
    QSpinBox *maxRatedTracksFilterSpinBox;
    QCheckBox *hasMaxRatedTracksFilterCheckBox;
    QSpinBox *minRatedTracksFilterSpinBox;
    QLabel *minRatedTracksFilterLabel;

    void setupUi(QWizardPage *muzeRaterFilterByRatedWizardPage)
    {
        if (muzeRaterFilterByRatedWizardPage->objectName().isEmpty())
            muzeRaterFilterByRatedWizardPage->setObjectName(QString::fromUtf8("muzeRaterFilterByRatedWizardPage"));
        muzeRaterFilterByRatedWizardPage->resize(918, 289);
        maxRatedTracksFilterSpinBox = new QSpinBox(muzeRaterFilterByRatedWizardPage);
        maxRatedTracksFilterSpinBox->setObjectName(QString::fromUtf8("maxRatedTracksFilterSpinBox"));
        maxRatedTracksFilterSpinBox->setEnabled(false);
        maxRatedTracksFilterSpinBox->setGeometry(QRect(620, 84, 46, 34));
        maxRatedTracksFilterSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxRatedTracksFilterSpinBox->setMinimum(0);
        maxRatedTracksFilterSpinBox->setMaximum(999);
        maxRatedTracksFilterSpinBox->setValue(1);
        hasMaxRatedTracksFilterCheckBox = new QCheckBox(muzeRaterFilterByRatedWizardPage);
        hasMaxRatedTracksFilterCheckBox->setObjectName(QString::fromUtf8("hasMaxRatedTracksFilterCheckBox"));
        hasMaxRatedTracksFilterCheckBox->setGeometry(QRect(20, 90, 551, 23));
        minRatedTracksFilterSpinBox = new QSpinBox(muzeRaterFilterByRatedWizardPage);
        minRatedTracksFilterSpinBox->setObjectName(QString::fromUtf8("minRatedTracksFilterSpinBox"));
        minRatedTracksFilterSpinBox->setGeometry(QRect(620, 12, 46, 34));
        minRatedTracksFilterSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minRatedTracksFilterSpinBox->setMinimum(0);
        minRatedTracksFilterSpinBox->setMaximum(999);
        minRatedTracksFilterSpinBox->setValue(1);
        minRatedTracksFilterLabel = new QLabel(muzeRaterFilterByRatedWizardPage);
        minRatedTracksFilterLabel->setObjectName(QString::fromUtf8("minRatedTracksFilterLabel"));
        minRatedTracksFilterLabel->setGeometry(QRect(30, 20, 541, 19));
        QWidget::setTabOrder(minRatedTracksFilterSpinBox, hasMaxRatedTracksFilterCheckBox);
        QWidget::setTabOrder(hasMaxRatedTracksFilterCheckBox, maxRatedTracksFilterSpinBox);

        retranslateUi(muzeRaterFilterByRatedWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterFilterByRatedWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterFilterByRatedWizardPage)
    {
        muzeRaterFilterByRatedWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterFilterByRatedWizardPage", "WizardPage", nullptr));
        muzeRaterFilterByRatedWizardPage->setTitle(QCoreApplication::translate("muzeRaterFilterByRatedWizardPage", "Filter albums by rated tracks", nullptr));
        muzeRaterFilterByRatedWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterFilterByRatedWizardPage", "Set a minimum and, optionally, a maximum number of rated tracks. A minimum of \"1\"  excludes albums with no rated tracks. A maximum of \"0\" includes only albums with no rated tracks (this might be useful to see which albums have not been rated).", nullptr));
        hasMaxRatedTracksFilterCheckBox->setText(QCoreApplication::translate("muzeRaterFilterByRatedWizardPage", "Also, only include albums with a maximum number of rated tracks of", nullptr));
        minRatedTracksFilterLabel->setText(QCoreApplication::translate("muzeRaterFilterByRatedWizardPage", "Only include albums with a minimum number of rated tracks of", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterFilterByRatedWizardPage: public Ui_muzeRaterFilterByRatedWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERFILTERBYRATEDWIZARDPAGE_H
