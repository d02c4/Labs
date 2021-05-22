/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *memory_text;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_credit;
    QPushButton *pushButton_6;
    QLabel *result_text;
    QPushButton *pushButton_9;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(602, 467);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0.517523, y1:0, x2:0.506009, y2:1, stop:0 rgba(33, 150, 243, 255), stop:1 rgba(233, 30, 99, 255))\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        memory_text = new QLabel(centralwidget);
        memory_text->setObjectName(QString::fromUtf8("memory_text"));
        QFont font;
        font.setPointSize(25);
        memory_text->setFont(font);
        memory_text->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"color:  white;\n"
"}"));

        gridLayout->addWidget(memory_text, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_divide->setFont(font1);
        pushButton_divide->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_divide, 1, 3, 1, 1);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setFont(font1);
        pushButton_clear->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_clear, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_3, 4, 2, 1, 1);

        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);
        pushButton_minus->setFont(font1);
        pushButton_minus->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_minus, 3, 3, 1, 1);

        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        sizePolicy.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy);
        pushButton_multiply->setFont(font1);
        pushButton_multiply->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_multiply, 2, 3, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);
        pushButton_plus->setFont(font1);
        pushButton_plus->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_plus, 4, 3, 1, 1);

        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setFont(font1);
        pushButton_equal->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_equal->setToolTipDuration(1);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_equal, 5, 3, 1, 1);

        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy);
        pushButton_dot->setFont(font1);
        pushButton_dot->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_dot, 5, 2, 1, 1);

        pushButton_credit = new QPushButton(centralwidget);
        pushButton_credit->setObjectName(QString::fromUtf8("pushButton_credit"));
        sizePolicy.setHeightForWidth(pushButton_credit->sizePolicy().hasHeightForWidth());
        pushButton_credit->setSizePolicy(sizePolicy);
        pushButton_credit->setFont(font1);
        pushButton_credit->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_credit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_credit, 1, 4, 3, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font1);
        pushButton_6->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_6, 3, 2, 1, 1);

        result_text = new QLabel(centralwidget);
        result_text->setObjectName(QString::fromUtf8("result_text"));
        QFont font2;
        font2.setPointSize(40);
        result_text->setFont(font2);
        result_text->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"color: white;\n"
"}"));

        gridLayout_2->addWidget(result_text, 0, 0, 1, 5);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font1);
        pushButton_9->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_plus_minus = new QPushButton(centralwidget);
        pushButton_plus_minus->setObjectName(QString::fromUtf8("pushButton_plus_minus"));
        sizePolicy.setHeightForWidth(pushButton_plus_minus->sizePolicy().hasHeightForWidth());
        pushButton_plus_minus->setSizePolicy(sizePolicy);
        pushButton_plus_minus->setFont(font1);
        pushButton_plus_minus->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_plus_minus, 1, 1, 1, 1);

        pushButton_backspace = new QPushButton(centralwidget);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));
        sizePolicy.setHeightForWidth(pushButton_backspace->sizePolicy().hasHeightForWidth());
        pushButton_backspace->setSizePolicy(sizePolicy);
        pushButton_backspace->setFont(font1);
        pushButton_backspace->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_backspace, 4, 4, 2, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font1);
        pushButton_7->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font1);
        pushButton_8->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setFont(font1);
        pushButton_0->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_0, 5, 0, 1, 2);

        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        sizePolicy.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy);
        pushButton_percent->setFont(font1);
        pushButton_percent->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_percent, 1, 2, 1, 1);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setFont(font1);
        pushButton_1->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 0px ;\n"
"	border-radius: 12px;\n"
"color: white;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"border: 1px solid #ff85e9;\n"
"color: white;\n"
"   background: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 1px solid #ff85e9;\n"
"    color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton_1, 4, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        memory_text->setText(QString());
        pushButton_divide->setText(QApplication::translate("MainWindow", "/", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_divide->setShortcut(QApplication::translate("MainWindow", "/", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_clear->setText(QApplication::translate("MainWindow", "AC", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_clear->setShortcut(QApplication::translate("MainWindow", "C", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_5->setShortcut(QApplication::translate("MainWindow", "5", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_3->setShortcut(QApplication::translate("MainWindow", "3", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_minus->setShortcut(QApplication::translate("MainWindow", "-", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_multiply->setText(QApplication::translate("MainWindow", "*", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_multiply->setShortcut(QApplication::translate("MainWindow", "*", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_4->setShortcut(QApplication::translate("MainWindow", "4", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_2->setShortcut(QApplication::translate("MainWindow", "2", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_plus->setShortcut(QApplication::translate("MainWindow", "+", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_equal->setShortcut(QApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_dot->setShortcut(QApplication::translate("MainWindow", ".", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_credit->setText(QApplication::translate("MainWindow", "Credit", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_credit->setShortcut(QApplication::translate("MainWindow", "K", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_6->setShortcut(QApplication::translate("MainWindow", "6", nullptr));
#endif // QT_NO_SHORTCUT
        result_text->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_9->setShortcut(QApplication::translate("MainWindow", "9", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_plus_minus->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_backspace->setText(QApplication::translate("MainWindow", "<-", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_backspace->setShortcut(QApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_7->setShortcut(QApplication::translate("MainWindow", "7", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_8->setShortcut(QApplication::translate("MainWindow", "8", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_0->setShortcut(QApplication::translate("MainWindow", "0", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_percent->setText(QApplication::translate("MainWindow", "%", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_percent->setShortcut(QApplication::translate("MainWindow", "%", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_1->setShortcut(QApplication::translate("MainWindow", "1", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
