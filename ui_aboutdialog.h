/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(518, 439);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/about-header.png")));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);
        label_4->setMargin(20);

        verticalLayout->addWidget(label_4);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "Dialog", 0));
        label->setText(QString());
        label_4->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>Visualino is open source software (MIT license). Visit the web site at <a href=\"http://www.visualino.net/\"><span style=\" text-decoration: underline; color:#0000ff;\">visualino.net</span></a>.</p><p align=\"center\">2014-2016 V\303\255ctor R. Ruiz &lt;<a href=\"mailto:rvr@linotipo.es\"><span style=\" text-decoration: underline; color:#0000ff;\">rvr@linotipo.es</span></a>&gt;</p><p>It uses the following open source projects:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.qt.io/\"><span style=\" text-decoration: underline; color:#0000ff;\">Qt 5</span></a>, The Qt Company (LGPL license 2.1).</li><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://developers.google.com/blockly/\"><span style=\" text"
                        "-decoration: underline; color:#0000ff;\">Google Blockly</span></a> (MIT license).</li><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://github.com/bq/roboblocks\"><span style=\" text-decoration: underline; color:#0000ff;\">Roboblocks</span></a>, bq (LGPL license).</li></ul><p>This project is done with the help of <a href=\"http://www.facebook.com/groups/arduinograncanaria\"><span style=\" text-decoration: underline; color:#0000ff;\">Arduino Gran Canaria</span></a> members and other <a href=\"https://github.com/vrruiz/visualino/blob/master/AUTHORS\"><span style=\" text-decoration: underline; color:#0000ff;\">contributors</span></a>.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
