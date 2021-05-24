/********************************************************************************
** Form generated from reading UI file 'kommi_main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOMMI_MAIN_H
#define UI_KOMMI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kommi_main
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *result;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *length_text;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTableWidget *table;

    void setupUi(QMainWindow *kommi_main)
    {
        if (kommi_main->objectName().isEmpty())
            kommi_main->setObjectName(QString::fromUtf8("kommi_main"));
        kommi_main->resize(1269, 600);
        kommi_main->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0.517523, y1:0, x2:0.506009, y2:1, stop:0 rgba(33, 150, 243, 255), stop:1 rgba(233, 30, 99, 255))\n"
"}"));
        centralwidget = new QWidget(kommi_main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 521, 601));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView {\n"
"	background-color: transparent;\n"
"	border: 0px;\n"
"}"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(510, 0, 751, 581));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border: 0px;\n"
"	color: white;\n"
"\n"
"}"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 741, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        horizontalLayout->addWidget(label_2);

        result = new QLabel(layoutWidget);
        result->setObjectName(QString::fromUtf8("result"));
        QFont font1;
        font1.setPointSize(18);
        result->setFont(font1);
        result->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignCentere';\n"
"}"));

        horizontalLayout->addWidget(result);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        horizontalLayout_2->addWidget(label_4);

        length_text = new QLabel(layoutWidget);
        length_text->setObjectName(QString::fromUtf8("length_text"));
        length_text->setFont(font1);
        length_text->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: white;\n"
"qproperty-alignment: 'AlignVCenter | AlignCentere';\n"
"}"));

        horizontalLayout_2->addWidget(length_text);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border: 0px;\n"
"	color: white;\n"
"\n"
"}"));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 30, 751, 251));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(7, 7, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(80);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(285, 0));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(pushButton);

        table = new QTableWidget(widget1);
        if (table->columnCount() < 6)
            table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (table->rowCount() < 6)
            table->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable);
        table->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        table->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem19->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable);
        table->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        table->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        table->setItem(1, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        table->setItem(1, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        table->setItem(1, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignCenter);
        table->setItem(2, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        table->setItem(2, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem26->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable);
        table->setItem(2, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        table->setItem(2, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        table->setItem(2, 4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        table->setItem(2, 5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        table->setItem(3, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        table->setItem(3, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        table->setItem(3, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem33->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable);
        table->setItem(3, 3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        table->setItem(3, 4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        table->setItem(3, 5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignCenter);
        table->setItem(4, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignCenter);
        table->setItem(4, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignCenter);
        table->setItem(4, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        table->setItem(4, 3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem40->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable);
        table->setItem(4, 4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignCenter);
        table->setItem(4, 5, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignCenter);
        table->setItem(5, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignCenter);
        table->setItem(5, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignCenter);
        table->setItem(5, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignCenter);
        table->setItem(5, 3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setTextAlignment(Qt::AlignCenter);
        table->setItem(5, 4, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem47->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable);
        table->setItem(5, 5, __qtablewidgetitem47);
        table->setObjectName(QString::fromUtf8("table"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy1);
        table->setMinimumSize(QSize(10, 10));
        table->setBaseSize(QSize(10, 10));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        table->setFont(font3);
        table->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"	background-color: transparent;\n"
"	color:white;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"	background-color: transparent;\n"
"	color:white;\n"
"}\n"
"\n"
"QHeaderView {\n"
"	background-color: transparent;\n"
"	color:white;\n"
"}\n"
"QHeader\n"
"{\n"
"	background-color: transparent;\n"
"color: white;\n"
"}\n"
"\n"
"QTableCornerButton::section {\n"
"	background-color: transparent;\n"
"	color:white;\n"
"}\n"
"QScrollBar:horizontal {\n"
"    border: 2px solid green;\n"
"    background: cyan;\n"
"    height: 15px;\n"
"    margin: 0px 40px 0 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: gray;\n"
"    min-width: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    background: blue;\n"
"    width: 16px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    background: magenta;\n"
"    width: 16px;\n"
"    subcontrol-position: top right;\n"
"    subcontrol-o"
                        "rigin: margin;\n"
"    border: 2px solid black;\n"
"    position: absolute;\n"
"    right: 20px;\n"
"}\n"
"\n"
"QScrollBar:left-arrow:horizontal, QScrollBar::right-arrow:horizontal {\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: pink;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"\n"
" QScrollBar:vertical {\n"
"     border: 2px solid green;\n"
"     background: cyan;\n"
"     width: 15px;\n"
"     margin: 22px 0 22px 0;\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"     background: gray;\n"
"     min-height: 20px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     border: 2px solid grey;\n"
"     background: #32CC99;\n"
"     height: 20px;\n"
"     subcontrol-position: bottom;\n"
"     subcontrol-origin: margin;\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"     border: 2px solid grey;\n"
"     background: #32CC99;\n"
"     height: 20px;\n"
"     subcontrol-position: top;\n"
"     subcontrol-origin: margin;\n"
""
                        " }\n"
" QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"     border: 2px solid grey;\n"
"     width: 3px;\n"
"     height: 3px;\n"
"     background: white;\n"
" }\n"
"\n"
" QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }\n"
"\n"
"\n"
"\n"
""));
        table->setInputMethodHints(Qt::ImhNone);
        table->horizontalHeader()->setVisible(false);
        table->horizontalHeader()->setCascadingSectionResizes(false);
        table->horizontalHeader()->setMinimumSectionSize(75);
        table->horizontalHeader()->setDefaultSectionSize(75);
        table->horizontalHeader()->setHighlightSections(false);
        table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table->horizontalHeader()->setStretchLastSection(false);
        table->verticalHeader()->setVisible(false);
        table->verticalHeader()->setMinimumSectionSize(40);
        table->verticalHeader()->setDefaultSectionSize(40);
        table->verticalHeader()->setHighlightSections(false);

        horizontalLayout_3->addWidget(table);


        verticalLayout_2->addWidget(groupBox_2);

        kommi_main->setCentralWidget(centralwidget);

        retranslateUi(kommi_main);

        QMetaObject::connectSlotsByName(kommi_main);
    } // setupUi

    void retranslateUi(QMainWindow *kommi_main)
    {
        kommi_main->setWindowTitle(QApplication::translate("kommi_main", "kommi_main", nullptr));
        groupBox->setTitle(QApplication::translate("kommi_main", "\320\222\321\213\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_2->setText(QApplication::translate("kommi_main", "\320\230\321\202\320\276\320\263\320\276\320\262\321\213\320\271 \320\277\321\203\321\202\321\214:", nullptr));
        result->setText(QString());
        label_4->setText(QApplication::translate("kommi_main", "\320\224\320\273\320\270\320\275\320\275\320\260 \320\277\321\203\321\202\320\270:", nullptr));
        length_text->setText(QString());
        groupBox_2->setTitle(QApplication::translate("kommi_main", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButton->setText(QApplication::translate("kommi_main", "\351\226\213\345\247\213", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("kommi_main", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("kommi_main", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("kommi_main", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("kommi_main", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("kommi_main", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("kommi_main", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("kommi_main", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("kommi_main", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("kommi_main", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("kommi_main", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("kommi_main", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("kommi_main", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = table->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("kommi_main", "6", nullptr));

        const bool __sortingEnabled = table->isSortingEnabled();
        table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = table->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("kommi_main", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = table->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("kommi_main", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = table->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("kommi_main", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = table->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("kommi_main", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = table->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("kommi_main", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = table->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("kommi_main", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = table->item(1, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("kommi_main", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = table->item(1, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("kommi_main", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = table->item(1, 2);
        ___qtablewidgetitem20->setText(QApplication::translate("kommi_main", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = table->item(1, 3);
        ___qtablewidgetitem21->setText(QApplication::translate("kommi_main", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = table->item(1, 4);
        ___qtablewidgetitem22->setText(QApplication::translate("kommi_main", "43", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = table->item(1, 5);
        ___qtablewidgetitem23->setText(QApplication::translate("kommi_main", "23", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = table->item(2, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("kommi_main", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = table->item(2, 1);
        ___qtablewidgetitem25->setText(QApplication::translate("kommi_main", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = table->item(2, 2);
        ___qtablewidgetitem26->setText(QApplication::translate("kommi_main", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = table->item(2, 3);
        ___qtablewidgetitem27->setText(QApplication::translate("kommi_main", "31", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = table->item(2, 4);
        ___qtablewidgetitem28->setText(QApplication::translate("kommi_main", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = table->item(2, 5);
        ___qtablewidgetitem29->setText(QApplication::translate("kommi_main", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = table->item(3, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("kommi_main", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = table->item(3, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("kommi_main", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = table->item(3, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("kommi_main", "27", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = table->item(3, 3);
        ___qtablewidgetitem33->setText(QApplication::translate("kommi_main", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = table->item(3, 4);
        ___qtablewidgetitem34->setText(QApplication::translate("kommi_main", "33", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = table->item(3, 5);
        ___qtablewidgetitem35->setText(QApplication::translate("kommi_main", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = table->item(4, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("kommi_main", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = table->item(4, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("kommi_main", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = table->item(4, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("kommi_main", "19", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = table->item(4, 3);
        ___qtablewidgetitem39->setText(QApplication::translate("kommi_main", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = table->item(4, 4);
        ___qtablewidgetitem40->setText(QApplication::translate("kommi_main", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = table->item(4, 5);
        ___qtablewidgetitem41->setText(QApplication::translate("kommi_main", "51", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = table->item(5, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("kommi_main", "42", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = table->item(5, 1);
        ___qtablewidgetitem43->setText(QApplication::translate("kommi_main", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = table->item(5, 2);
        ___qtablewidgetitem44->setText(QApplication::translate("kommi_main", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = table->item(5, 3);
        ___qtablewidgetitem45->setText(QApplication::translate("kommi_main", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = table->item(5, 4);
        ___qtablewidgetitem46->setText(QApplication::translate("kommi_main", "23", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = table->item(5, 5);
        ___qtablewidgetitem47->setText(QApplication::translate("kommi_main", "M", nullptr));
        table->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class kommi_main: public Ui_kommi_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOMMI_MAIN_H
