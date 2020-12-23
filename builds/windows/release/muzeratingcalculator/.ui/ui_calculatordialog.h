/********************************************************************************
** Form generated from reading UI file 'calculatordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORDIALOG_H
#define UI_CALCULATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CalculatorDialog
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *star5SpinBox;
    QLabel *star5TextLabel;
    QLabel *star4TextLabel;
    QLabel *star3TextLabel;
    QLabel *star2TextLabel;
    QLabel *star1TextLabel;
    QSpinBox *star4SpinBox;
    QSpinBox *star3SpinBox;
    QSpinBox *star2SpinBox;
    QSpinBox *star1SpinBox;
    QLabel *numberOfRatedTracksTextLabel;
    QLabel *numberOfRatedTracksLabel;
    QLabel *muzeRatingLabel;
    QLineEdit *muzeRatingLineEdit;
    QLabel *star5Label;
    QLabel *star4Label;
    QLabel *star3Label;
    QLabel *star2Label;
    QLabel *star1Label;
    QLabel *numberOfStarsTextLabel;
    QLabel *numberOfStarsLabel;
    QLabel *starsPerRatedTrackLabel;
    QLineEdit *starsPerRatedTrackLineEdit;
    QLabel *versionLabel;
    QLabel *watermarkLabel;

    void setupUi(QDialog *CalculatorDialog)
    {
        if (CalculatorDialog->objectName().isEmpty())
            CalculatorDialog->setObjectName(QString::fromUtf8("CalculatorDialog"));
        CalculatorDialog->resize(734, 450);
        buttonBox = new QDialogButtonBox(CalculatorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 390, 671, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Reset);
        buttonBox->setCenterButtons(false);
        star5SpinBox = new QSpinBox(CalculatorDialog);
        star5SpinBox->setObjectName(QString::fromUtf8("star5SpinBox"));
        star5SpinBox->setGeometry(QRect(256, 30, 46, 34));
        star5SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        star5SpinBox->setMaximum(999);
        star5TextLabel = new QLabel(CalculatorDialog);
        star5TextLabel->setObjectName(QString::fromUtf8("star5TextLabel"));
        star5TextLabel->setGeometry(QRect(30, 36, 62, 21));
        star4TextLabel = new QLabel(CalculatorDialog);
        star4TextLabel->setObjectName(QString::fromUtf8("star4TextLabel"));
        star4TextLabel->setGeometry(QRect(30, 86, 62, 21));
        star3TextLabel = new QLabel(CalculatorDialog);
        star3TextLabel->setObjectName(QString::fromUtf8("star3TextLabel"));
        star3TextLabel->setGeometry(QRect(30, 136, 62, 21));
        star2TextLabel = new QLabel(CalculatorDialog);
        star2TextLabel->setObjectName(QString::fromUtf8("star2TextLabel"));
        star2TextLabel->setGeometry(QRect(30, 186, 62, 21));
        star1TextLabel = new QLabel(CalculatorDialog);
        star1TextLabel->setObjectName(QString::fromUtf8("star1TextLabel"));
        star1TextLabel->setGeometry(QRect(30, 236, 62, 21));
        star4SpinBox = new QSpinBox(CalculatorDialog);
        star4SpinBox->setObjectName(QString::fromUtf8("star4SpinBox"));
        star4SpinBox->setGeometry(QRect(256, 80, 46, 34));
        star4SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        star4SpinBox->setMaximum(999);
        star3SpinBox = new QSpinBox(CalculatorDialog);
        star3SpinBox->setObjectName(QString::fromUtf8("star3SpinBox"));
        star3SpinBox->setGeometry(QRect(256, 130, 46, 34));
        star3SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        star3SpinBox->setMaximum(999);
        star2SpinBox = new QSpinBox(CalculatorDialog);
        star2SpinBox->setObjectName(QString::fromUtf8("star2SpinBox"));
        star2SpinBox->setGeometry(QRect(256, 180, 46, 34));
        star2SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        star2SpinBox->setMaximum(999);
        star1SpinBox = new QSpinBox(CalculatorDialog);
        star1SpinBox->setObjectName(QString::fromUtf8("star1SpinBox"));
        star1SpinBox->setGeometry(QRect(256, 230, 46, 34));
        star1SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        star1SpinBox->setMaximum(999);
        numberOfRatedTracksTextLabel = new QLabel(CalculatorDialog);
        numberOfRatedTracksTextLabel->setObjectName(QString::fromUtf8("numberOfRatedTracksTextLabel"));
        numberOfRatedTracksTextLabel->setGeometry(QRect(30, 300, 181, 16));
        numberOfRatedTracksLabel = new QLabel(CalculatorDialog);
        numberOfRatedTracksLabel->setObjectName(QString::fromUtf8("numberOfRatedTracksLabel"));
        numberOfRatedTracksLabel->setGeometry(QRect(230, 300, 51, 16));
        numberOfRatedTracksLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        muzeRatingLabel = new QLabel(CalculatorDialog);
        muzeRatingLabel->setObjectName(QString::fromUtf8("muzeRatingLabel"));
        muzeRatingLabel->setGeometry(QRect(400, 36, 181, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        muzeRatingLabel->setFont(font);
        muzeRatingLineEdit = new QLineEdit(CalculatorDialog);
        muzeRatingLineEdit->setObjectName(QString::fromUtf8("muzeRatingLineEdit"));
        muzeRatingLineEdit->setGeometry(QRect(589, 30, 111, 34));
        muzeRatingLineEdit->setFont(font);
        muzeRatingLineEdit->setFocusPolicy(Qt::TabFocus);
        muzeRatingLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        muzeRatingLineEdit->setReadOnly(true);
        star5Label = new QLabel(CalculatorDialog);
        star5Label->setObjectName(QString::fromUtf8("star5Label"));
        star5Label->setGeometry(QRect(100, 36, 141, 21));
        star5Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        star4Label = new QLabel(CalculatorDialog);
        star4Label->setObjectName(QString::fromUtf8("star4Label"));
        star4Label->setGeometry(QRect(100, 86, 141, 21));
        star4Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        star3Label = new QLabel(CalculatorDialog);
        star3Label->setObjectName(QString::fromUtf8("star3Label"));
        star3Label->setGeometry(QRect(100, 136, 141, 21));
        star3Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        star2Label = new QLabel(CalculatorDialog);
        star2Label->setObjectName(QString::fromUtf8("star2Label"));
        star2Label->setGeometry(QRect(100, 186, 141, 21));
        star2Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        star1Label = new QLabel(CalculatorDialog);
        star1Label->setObjectName(QString::fromUtf8("star1Label"));
        star1Label->setGeometry(QRect(100, 236, 131, 21));
        star1Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        numberOfStarsTextLabel = new QLabel(CalculatorDialog);
        numberOfStarsTextLabel->setObjectName(QString::fromUtf8("numberOfStarsTextLabel"));
        numberOfStarsTextLabel->setGeometry(QRect(30, 340, 151, 16));
        numberOfStarsLabel = new QLabel(CalculatorDialog);
        numberOfStarsLabel->setObjectName(QString::fromUtf8("numberOfStarsLabel"));
        numberOfStarsLabel->setGeometry(QRect(230, 340, 51, 16));
        numberOfStarsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        starsPerRatedTrackLabel = new QLabel(CalculatorDialog);
        starsPerRatedTrackLabel->setObjectName(QString::fromUtf8("starsPerRatedTrackLabel"));
        starsPerRatedTrackLabel->setGeometry(QRect(400, 106, 181, 21));
        starsPerRatedTrackLineEdit = new QLineEdit(CalculatorDialog);
        starsPerRatedTrackLineEdit->setObjectName(QString::fromUtf8("starsPerRatedTrackLineEdit"));
        starsPerRatedTrackLineEdit->setGeometry(QRect(590, 100, 111, 34));
        starsPerRatedTrackLineEdit->setFocusPolicy(Qt::TabFocus);
        starsPerRatedTrackLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        starsPerRatedTrackLineEdit->setReadOnly(true);
        versionLabel = new QLabel(CalculatorDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setGeometry(QRect(480, 340, 221, 20));
        versionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        watermarkLabel = new QLabel(CalculatorDialog);
        watermarkLabel->setObjectName(QString::fromUtf8("watermarkLabel"));
        watermarkLabel->setGeometry(QRect(410, 170, 171, 171));
        watermarkLabel->setScaledContents(true);
        QWidget::setTabOrder(star5SpinBox, star4SpinBox);
        QWidget::setTabOrder(star4SpinBox, star3SpinBox);
        QWidget::setTabOrder(star3SpinBox, star2SpinBox);
        QWidget::setTabOrder(star2SpinBox, star1SpinBox);
        QWidget::setTabOrder(star1SpinBox, muzeRatingLineEdit);
        QWidget::setTabOrder(muzeRatingLineEdit, starsPerRatedTrackLineEdit);

        retranslateUi(CalculatorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CalculatorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CalculatorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CalculatorDialog);
    } // setupUi

    void retranslateUi(QDialog *CalculatorDialog)
    {
        CalculatorDialog->setWindowTitle(QCoreApplication::translate("CalculatorDialog", "Muze Rating Calculator", nullptr));
        star5TextLabel->setText(QCoreApplication::translate("CalculatorDialog", "5 Stars", nullptr));
        star4TextLabel->setText(QCoreApplication::translate("CalculatorDialog", "4 Stars", nullptr));
        star3TextLabel->setText(QCoreApplication::translate("CalculatorDialog", "3 Stars", nullptr));
        star2TextLabel->setText(QCoreApplication::translate("CalculatorDialog", "2 Stars", nullptr));
        star1TextLabel->setText(QCoreApplication::translate("CalculatorDialog", "1 Star", nullptr));
        numberOfRatedTracksTextLabel->setText(QCoreApplication::translate("CalculatorDialog", "Number of Rated Tracks:", nullptr));
        numberOfRatedTracksLabel->setText(QCoreApplication::translate("CalculatorDialog", "0", nullptr));
        muzeRatingLabel->setText(QCoreApplication::translate("CalculatorDialog", "Muze Rating:", nullptr));
        star5Label->setText(QCoreApplication::translate("CalculatorDialog", "\342\230\205\342\230\205\342\230\205\342\230\205\342\230\205", nullptr));
        star4Label->setText(QCoreApplication::translate("CalculatorDialog", "\342\230\205\342\230\205\342\230\205\342\230\205", nullptr));
        star3Label->setText(QCoreApplication::translate("CalculatorDialog", "\342\230\205\342\230\205\342\230\205", nullptr));
        star2Label->setText(QCoreApplication::translate("CalculatorDialog", "\342\230\205\342\230\205", nullptr));
        star1Label->setText(QCoreApplication::translate("CalculatorDialog", "\342\230\205", nullptr));
        numberOfStarsTextLabel->setText(QCoreApplication::translate("CalculatorDialog", "Number of Stars:", nullptr));
        numberOfStarsLabel->setText(QCoreApplication::translate("CalculatorDialog", "0", nullptr));
        starsPerRatedTrackLabel->setText(QCoreApplication::translate("CalculatorDialog", "Stars per Rated Track:", nullptr));
        versionLabel->setText(QCoreApplication::translate("CalculatorDialog", "Version 1.0.0", nullptr));
        watermarkLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CalculatorDialog: public Ui_CalculatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORDIALOG_H
