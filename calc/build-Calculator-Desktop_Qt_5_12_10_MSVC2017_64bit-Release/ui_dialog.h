/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButton_cred;
    QRadioButton *radioButton_time;
    QRadioButton *radioButton_Percent;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_0;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_annu;
    QRadioButton *radioButton_Diff;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_3;
    QPushButton *pushButton_credit;
    QPushButton *pushButton_equal;
    QTableWidget *table_Diff_cred;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Sum_Cred;
    QLabel *label_Date;
    QLabel *label_Percent;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_mounth_pay;
    QLabel *label_pereplata;
    QLabel *label_result;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1337, 634);
        Dialog->setAutoFillBackground(false);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0.517523, y1:0, x2:0.506009, y2:1, stop:0 rgba(33, 150, 243, 255), stop:1 rgba(233, 30, 99, 255))\n"
"\n"
"}"));
        Dialog->setSizeGripEnabled(false);
        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(-10, -10, 51, 341));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border: 0px;\n"
"\n"
"\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        radioButton_cred = new QRadioButton(groupBox_4);
        radioButton_cred->setObjectName(QString::fromUtf8("radioButton_cred"));

        verticalLayout_6->addWidget(radioButton_cred);

        radioButton_time = new QRadioButton(groupBox_4);
        radioButton_time->setObjectName(QString::fromUtf8("radioButton_time"));

        verticalLayout_6->addWidget(radioButton_time);

        radioButton_Percent = new QRadioButton(groupBox_4);
        radioButton_Percent->setObjectName(QString::fromUtf8("radioButton_Percent"));

        verticalLayout_6->addWidget(radioButton_Percent);

        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(28, 287, 1301, 341));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_backspace = new QPushButton(layoutWidget);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_backspace->sizePolicy().hasHeightForWidth());
        pushButton_backspace->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton_backspace->setFont(font);
        pushButton_backspace->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_backspace, 0, 3, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setFont(font);
        pushButton_0->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 2);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font);
        pushButton_9->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font);
        pushButton_6->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_dot = new QPushButton(layoutWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy);
        pushButton_dot->setFont(font);
        pushButton_dot->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_dot, 4, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);
        pushButton_4->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font);
        pushButton_7->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        radioButton_annu = new QRadioButton(layoutWidget);
        radioButton_annu->setObjectName(QString::fromUtf8("radioButton_annu"));
        QFont font1;
        font1.setPointSize(9);
        radioButton_annu->setFont(font1);
        radioButton_annu->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        verticalLayout_5->addWidget(radioButton_annu);

        radioButton_Diff = new QRadioButton(layoutWidget);
        radioButton_Diff->setObjectName(QString::fromUtf8("radioButton_Diff"));
        radioButton_Diff->setFont(font1);
        radioButton_Diff->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        verticalLayout_5->addWidget(radioButton_Diff);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 2);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font);
        pushButton_8->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);
        pushButton_2->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);
        pushButton_5->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setFont(font);
        pushButton_1->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_clear = new QPushButton(layoutWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setFont(font);
        pushButton_clear->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_clear, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);
        pushButton_3->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_credit = new QPushButton(layoutWidget);
        pushButton_credit->setObjectName(QString::fromUtf8("pushButton_credit"));
        sizePolicy.setHeightForWidth(pushButton_credit->sizePolicy().hasHeightForWidth());
        pushButton_credit->setSizePolicy(sizePolicy);
        pushButton_credit->setFont(font);
        pushButton_credit->setToolTipDuration(1);
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

        gridLayout->addWidget(pushButton_credit, 1, 3, 2, 1);

        pushButton_equal = new QPushButton(layoutWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setFont(font);
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

        gridLayout->addWidget(pushButton_equal, 3, 3, 2, 1);


        horizontalLayout_3->addLayout(gridLayout);

        table_Diff_cred = new QTableWidget(layoutWidget);
        table_Diff_cred->setObjectName(QString::fromUtf8("table_Diff_cred"));
        table_Diff_cred->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"	background-color: transparent;\n"
"	color:white;\n"
"}\n"
"QHeaderView::section {\n"
"	background-color: transparent;\n"
"	color:white;\n"
"}\n"
"\n"
"QHeaderView {\n"
"	background-color: transparent;\n"
"	color:white;\n"
"}\n"
"QTableCornerButton::section {\n"
"	background-color: transparent;\n"
"	color:white;\n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(table_Diff_cred);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 0, 1311, 271));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border: 0px;\n"
"	color: white;\n"
"\n"
"}"));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 621, 253));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_Sum_Cred = new QLabel(layoutWidget2);
        label_Sum_Cred->setObjectName(QString::fromUtf8("label_Sum_Cred"));
        QFont font3;
        font3.setPointSize(16);
        label_Sum_Cred->setFont(font3);
        label_Sum_Cred->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"}"));

        verticalLayout_2->addWidget(label_Sum_Cred);

        label_Date = new QLabel(layoutWidget2);
        label_Date->setObjectName(QString::fromUtf8("label_Date"));
        label_Date->setFont(font3);
        label_Date->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"}"));

        verticalLayout_2->addWidget(label_Date);

        label_Percent = new QLabel(layoutWidget2);
        label_Percent->setObjectName(QString::fromUtf8("label_Percent"));
        label_Percent->setFont(font3);
        label_Percent->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"}"));

        verticalLayout_2->addWidget(label_Percent);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border: 0px;\n"
"	color: white;\n"
"\n"
"}"));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(14, 33, 621, 231));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        verticalLayout_7->addWidget(label_11);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        verticalLayout_7->addWidget(label_13);

        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        verticalLayout_7->addWidget(label_15);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_mounth_pay = new QLabel(layoutWidget_2);
        label_mounth_pay->setObjectName(QString::fromUtf8("label_mounth_pay"));
        label_mounth_pay->setFont(font3);
        label_mounth_pay->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"}"));

        verticalLayout_8->addWidget(label_mounth_pay);

        label_pereplata = new QLabel(layoutWidget_2);
        label_pereplata->setObjectName(QString::fromUtf8("label_pereplata"));
        label_pereplata->setFont(font3);
        label_pereplata->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"}"));

        verticalLayout_8->addWidget(label_pereplata);

        label_result = new QLabel(layoutWidget_2);
        label_result->setObjectName(QString::fromUtf8("label_result"));
        label_result->setFont(font3);
        label_result->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"}"));

        verticalLayout_8->addWidget(label_result);


        horizontalLayout_4->addLayout(verticalLayout_8);


        horizontalLayout_5->addWidget(groupBox_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
#ifndef QT_NO_WHATSTHIS
        Dialog->setWhatsThis(QApplication::translate("Dialog", "QDialog\n"
"{\n"
"\n"
"\n"
"\n"
"\n"
"}", nullptr));
#endif // QT_NO_WHATSTHIS
        groupBox_4->setTitle(QString());
        radioButton_cred->setText(QString());
        radioButton_time->setText(QString());
        radioButton_Percent->setText(QString());
        pushButton_backspace->setText(QApplication::translate("Dialog", "<-", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_backspace->setShortcut(QApplication::translate("Dialog", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_0->setText(QApplication::translate("Dialog", "0", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_0->setShortcut(QApplication::translate("Dialog", "0", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_9->setText(QApplication::translate("Dialog", "9", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_9->setShortcut(QApplication::translate("Dialog", "9", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_6->setText(QApplication::translate("Dialog", "6", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_6->setShortcut(QApplication::translate("Dialog", "6", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_dot->setText(QApplication::translate("Dialog", ".", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_dot->setShortcut(QApplication::translate("Dialog", ".", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_4->setText(QApplication::translate("Dialog", "4", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_4->setShortcut(QApplication::translate("Dialog", "4", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_7->setText(QApplication::translate("Dialog", "7", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_7->setShortcut(QApplication::translate("Dialog", "7", nullptr));
#endif // QT_NO_SHORTCUT
        radioButton_annu->setText(QApplication::translate("Dialog", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\320\275\321\202\320\275\321\213\320\271", nullptr));
        radioButton_Diff->setText(QApplication::translate("Dialog", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        pushButton_8->setText(QApplication::translate("Dialog", "8", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_8->setShortcut(QApplication::translate("Dialog", "8", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_2->setText(QApplication::translate("Dialog", "2", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_2->setShortcut(QApplication::translate("Dialog", "2", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_5->setText(QApplication::translate("Dialog", "5", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_5->setShortcut(QApplication::translate("Dialog", "5", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_1->setText(QApplication::translate("Dialog", "1", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_1->setShortcut(QApplication::translate("Dialog", "1", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_clear->setText(QApplication::translate("Dialog", "AC", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_clear->setShortcut(QApplication::translate("Dialog", "C", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_3->setText(QApplication::translate("Dialog", "3", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_3->setShortcut(QApplication::translate("Dialog", "3", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_credit->setText(QApplication::translate("Dialog", "\320\236\320\261\321\213\321\207\320\275\321\213\320\271", nullptr));
        pushButton_equal->setText(QApplication::translate("Dialog", "=", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_equal->setShortcut(QApplication::translate("Dialog", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("Dialog", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label->setText(QApplication::translate("Dialog", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260: ", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        label_3->setText(QApplication::translate("Dialog", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_Sum_Cred->setText(QApplication::translate("Dialog", "0", nullptr));
        label_Date->setText(QApplication::translate("Dialog", "0", nullptr));
        label_Percent->setText(QApplication::translate("Dialog", "0", nullptr));
        groupBox_2->setTitle(QApplication::translate("Dialog", "\320\222\321\213\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_11->setText(QApplication::translate("Dialog", "\320\241\321\203\320\274\320\274\320\260 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276\320\263\320\276 \320\277\320\273\320\260\321\202\320\265\320\266\320\260: ", nullptr));
        label_13->setText(QApplication::translate("Dialog", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\260\320\274", nullptr));
        label_15->setText(QApplication::translate("Dialog", "\320\230\321\202\320\276\320\263\320\276:", nullptr));
        label_mounth_pay->setText(QApplication::translate("Dialog", "0", nullptr));
        label_pereplata->setText(QApplication::translate("Dialog", "0", nullptr));
        label_result->setText(QApplication::translate("Dialog", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
