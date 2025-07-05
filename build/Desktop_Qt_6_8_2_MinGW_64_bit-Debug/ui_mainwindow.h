/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTextEdit *text_Pal;
    QPushButton *Button_Palindrom;
    QTextBrowser *palindr_Browser;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *text_Color;
    QPushButton *Button_Color;
    QTextBrowser *color_Browser;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(820, 610);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        text_Pal = new QTextEdit(centralwidget);
        text_Pal->setObjectName("text_Pal");
        text_Pal->setFont(font);

        verticalLayout->addWidget(text_Pal);

        Button_Palindrom = new QPushButton(centralwidget);
        Button_Palindrom->setObjectName("Button_Palindrom");
        Button_Palindrom->setFont(font);

        verticalLayout->addWidget(Button_Palindrom);


        horizontalLayout->addLayout(verticalLayout);

        palindr_Browser = new QTextBrowser(centralwidget);
        palindr_Browser->setObjectName("palindr_Browser");
        palindr_Browser->setFont(font);

        horizontalLayout->addWidget(palindr_Browser);


        verticalLayout_3->addLayout(horizontalLayout);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        text_Color = new QTextEdit(centralwidget);
        text_Color->setObjectName("text_Color");
        text_Color->setFont(font);

        verticalLayout_2->addWidget(text_Color);

        Button_Color = new QPushButton(centralwidget);
        Button_Color->setObjectName("Button_Color");
        Button_Color->setFont(font);

        verticalLayout_2->addWidget(Button_Color);


        horizontalLayout_2->addLayout(verticalLayout_2);

        color_Browser = new QTextBrowser(centralwidget);
        color_Browser->setObjectName("color_Browser");
        color_Browser->setFont(font);

        horizontalLayout_2->addWidget(color_Browser);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);

        verticalLayout_3->addWidget(pushButton_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 820, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_3, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\262\321\201\320\265 \321\201\320\273\320\276\320\262\320\260-\320\277\320\260\320\273\320\270\320\275\320\264\321\200\320\276\320\274\321\213 \320\270 \320\262\321\213\320\262\320\265\321\201\321\202\320\270 \320\270\321\205 \320\262 \320\277\320\276\321\200\321\217\320\264\320\272\320\265 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\217:", nullptr));
        Button_Palindrom->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\260\320\273\320\270\320\275\320\264\321\200\320\276\320\274\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \321\210\320\265\321\201\321\202\320\275\320\260\320\264\321\206\320\260\321\202\320\270\321\200\320\270\321\207\320\275\321\213\320\265 \320\270\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200\321\213 \321\206\320\262\320\265\321\202\320\260", nullptr));
        text_Color->setPlaceholderText(QCoreApplication::translate("MainWindow", "#AF1923", nullptr));
        Button_Color->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\270\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200\321\213 \321\206\320\262\320\265\321\202\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
