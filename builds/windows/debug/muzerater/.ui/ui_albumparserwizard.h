/********************************************************************************
** Form generated from reading UI file 'albumparserwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMPARSERWIZARD_H
#define UI_ALBUMPARSERWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWizard>

QT_BEGIN_NAMESPACE

class Ui_albumParserWizard
{
public:

    void setupUi(QWizard *albumParserWizard)
    {
        if (albumParserWizard->objectName().isEmpty())
            albumParserWizard->setObjectName(QString::fromUtf8("albumParserWizard"));
        albumParserWizard->setEnabled(true);
        albumParserWizard->resize(962, 438);
        albumParserWizard->setFocusPolicy(Qt::StrongFocus);
        albumParserWizard->setAutoFillBackground(false);
        albumParserWizard->setWizardStyle(QWizard::ClassicStyle);
        albumParserWizard->setOptions(QWizard::IndependentPages|QWizard::NoBackButtonOnLastPage|QWizard::NoCancelButtonOnLastPage);

        retranslateUi(albumParserWizard);

        QMetaObject::connectSlotsByName(albumParserWizard);
    } // setupUi

    void retranslateUi(QWizard *albumParserWizard)
    {
        albumParserWizard->setWindowTitle(QCoreApplication::translate("albumParserWizard", "Muze Rater", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumParserWizard: public Ui_albumParserWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMPARSERWIZARD_H
