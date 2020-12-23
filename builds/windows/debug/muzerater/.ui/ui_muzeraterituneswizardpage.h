/********************************************************************************
** Form generated from reading UI file 'muzeraterituneswizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUZERATERITUNESWIZARDPAGE_H
#define UI_MUZERATERITUNESWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_muzeRaterITunesWizardPage
{
public:
    QLineEdit *iTunesDefaultLibraryFilePathLineEdit;
    QRadioButton *iTunesDefaultLibraryRadioButton;
    QRadioButton *iTunesCustomLibraryRadioButton;
    QLineEdit *iTunesCustomLibraryFilePathLineEdit;
    QPushButton *iTunesCustomLibraryFilePathBrowsePushButton;
    QLabel *iTunesDefaultLibraryNotAvailableLabel;
    QCheckBox *isITunesValidCheckBox;

    void setupUi(QWizardPage *muzeRaterITunesWizardPage)
    {
        if (muzeRaterITunesWizardPage->objectName().isEmpty())
            muzeRaterITunesWizardPage->setObjectName(QString::fromUtf8("muzeRaterITunesWizardPage"));
        muzeRaterITunesWizardPage->resize(920, 285);
        iTunesDefaultLibraryFilePathLineEdit = new QLineEdit(muzeRaterITunesWizardPage);
        iTunesDefaultLibraryFilePathLineEdit->setObjectName(QString::fromUtf8("iTunesDefaultLibraryFilePathLineEdit"));
        iTunesDefaultLibraryFilePathLineEdit->setEnabled(true);
        iTunesDefaultLibraryFilePathLineEdit->setGeometry(QRect(40, 40, 711, 34));
        iTunesDefaultLibraryFilePathLineEdit->setFocusPolicy(Qt::ClickFocus);
        iTunesDefaultLibraryFilePathLineEdit->setReadOnly(true);
        iTunesDefaultLibraryRadioButton = new QRadioButton(muzeRaterITunesWizardPage);
        iTunesDefaultLibraryRadioButton->setObjectName(QString::fromUtf8("iTunesDefaultLibraryRadioButton"));
        iTunesDefaultLibraryRadioButton->setGeometry(QRect(10, 10, 731, 23));
        iTunesDefaultLibraryRadioButton->setChecked(true);
        iTunesCustomLibraryRadioButton = new QRadioButton(muzeRaterITunesWizardPage);
        iTunesCustomLibraryRadioButton->setObjectName(QString::fromUtf8("iTunesCustomLibraryRadioButton"));
        iTunesCustomLibraryRadioButton->setGeometry(QRect(10, 140, 741, 23));
        iTunesCustomLibraryFilePathLineEdit = new QLineEdit(muzeRaterITunesWizardPage);
        iTunesCustomLibraryFilePathLineEdit->setObjectName(QString::fromUtf8("iTunesCustomLibraryFilePathLineEdit"));
        iTunesCustomLibraryFilePathLineEdit->setGeometry(QRect(40, 170, 711, 34));
        iTunesCustomLibraryFilePathBrowsePushButton = new QPushButton(muzeRaterITunesWizardPage);
        iTunesCustomLibraryFilePathBrowsePushButton->setObjectName(QString::fromUtf8("iTunesCustomLibraryFilePathBrowsePushButton"));
        iTunesCustomLibraryFilePathBrowsePushButton->setGeometry(QRect(770, 170, 112, 34));
        iTunesDefaultLibraryNotAvailableLabel = new QLabel(muzeRaterITunesWizardPage);
        iTunesDefaultLibraryNotAvailableLabel->setObjectName(QString::fromUtf8("iTunesDefaultLibraryNotAvailableLabel"));
        iTunesDefaultLibraryNotAvailableLabel->setGeometry(QRect(40, 80, 701, 19));
        isITunesValidCheckBox = new QCheckBox(muzeRaterITunesWizardPage);
        isITunesValidCheckBox->setObjectName(QString::fromUtf8("isITunesValidCheckBox"));
        isITunesValidCheckBox->setEnabled(true);
        isITunesValidCheckBox->setGeometry(QRect(760, 10, 101, 23));
        isITunesValidCheckBox->setFocusPolicy(Qt::NoFocus);
        isITunesValidCheckBox->setChecked(false);
        QWidget::setTabOrder(iTunesDefaultLibraryRadioButton, iTunesCustomLibraryRadioButton);
        QWidget::setTabOrder(iTunesCustomLibraryRadioButton, iTunesCustomLibraryFilePathLineEdit);
        QWidget::setTabOrder(iTunesCustomLibraryFilePathLineEdit, iTunesCustomLibraryFilePathBrowsePushButton);
        QWidget::setTabOrder(iTunesCustomLibraryFilePathBrowsePushButton, iTunesDefaultLibraryFilePathLineEdit);

        retranslateUi(muzeRaterITunesWizardPage);

        QMetaObject::connectSlotsByName(muzeRaterITunesWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *muzeRaterITunesWizardPage)
    {
        muzeRaterITunesWizardPage->setWindowTitle(QCoreApplication::translate("muzeRaterITunesWizardPage", "WizardPage", nullptr));
        muzeRaterITunesWizardPage->setTitle(QCoreApplication::translate("muzeRaterITunesWizardPage", "iTunes Music Library", nullptr));
        muzeRaterITunesWizardPage->setSubTitle(QCoreApplication::translate("muzeRaterITunesWizardPage", "Select the location of the iTunes Music Library XML file. To use this file, the \"Share iTunes XML Library with other applications\" option must be checked in the iTunes application's preferences (under Advanced options).", nullptr));
        iTunesDefaultLibraryRadioButton->setText(QCoreApplication::translate("muzeRaterITunesWizardPage", "Use the default iTunes Music Library XML database.", nullptr));
        iTunesCustomLibraryRadioButton->setText(QCoreApplication::translate("muzeRaterITunesWizardPage", "Use a manually selected  iTunes Music Library XML database file.", nullptr));
        iTunesCustomLibraryFilePathBrowsePushButton->setText(QCoreApplication::translate("muzeRaterITunesWizardPage", "Browse", nullptr));
        iTunesDefaultLibraryNotAvailableLabel->setText(QCoreApplication::translate("muzeRaterITunesWizardPage", "(This library is currently not available.)", nullptr));
        isITunesValidCheckBox->setText(QCoreApplication::translate("muzeRaterITunesWizardPage", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class muzeRaterITunesWizardPage: public Ui_muzeRaterITunesWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUZERATERITUNESWIZARDPAGE_H
