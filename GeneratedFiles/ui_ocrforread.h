/********************************************************************************
** Form generated from reading UI file 'ocrforread.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCRFORREAD_H
#define UI_OCRFORREAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OCRForReadClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_browse;
    QLabel *labelshow;
    QPushButton *pushButton_start;
    QPlainTextEdit *plainTextEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OCRForReadClass)
    {
        if (OCRForReadClass->objectName().isEmpty())
            OCRForReadClass->setObjectName(QStringLiteral("OCRForReadClass"));
        OCRForReadClass->resize(1600, 900);
        QIcon icon;
        icon.addFile(QStringLiteral("panda.ico"), QSize(), QIcon::Normal, QIcon::Off);
        OCRForReadClass->setWindowIcon(icon);
        centralWidget = new QWidget(OCRForReadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_stop = new QPushButton(centralWidget);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(870, 480, 75, 23));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Stop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_stop->setIcon(icon1);
        pushButton_browse = new QPushButton(centralWidget);
        pushButton_browse->setObjectName(QStringLiteral("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(870, 310, 75, 23));
        labelshow = new QLabel(centralWidget);
        labelshow->setObjectName(QStringLiteral("labelshow"));
        labelshow->setGeometry(QRect(40, 20, 750, 750));
        labelshow->setAlignment(Qt::AlignCenter);
        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setGeometry(QRect(870, 390, 75, 23));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Start.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_start->setIcon(icon2);
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(1010, -40, 571, 871));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        plainTextEdit->setFont(font);
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        OCRForReadClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(OCRForReadClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OCRForReadClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OCRForReadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OCRForReadClass->setStatusBar(statusBar);

        retranslateUi(OCRForReadClass);

        QMetaObject::connectSlotsByName(OCRForReadClass);
    } // setupUi

    void retranslateUi(QMainWindow *OCRForReadClass)
    {
        OCRForReadClass->setWindowTitle(QApplication::translate("OCRForReadClass", "OCRForRead", 0));
        pushButton_stop->setText(QApplication::translate("OCRForReadClass", "\347\273\223\346\235\237", 0));
        pushButton_browse->setText(QApplication::translate("OCRForReadClass", "\345\220\257\345\212\250\346\221\204\345\203\217\346\234\272", 0));
        labelshow->setText(QApplication::translate("OCRForReadClass", "Image display area", 0));
        pushButton_start->setText(QApplication::translate("OCRForReadClass", "\350\257\206\345\210\253", 0));
        plainTextEdit->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class OCRForReadClass: public Ui_OCRForReadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCRFORREAD_H
