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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kommi_main
{
public:
    QWidget *centralwidget;
    QTableWidget *table;
    QPushButton *pushButton;
    QLineEdit *number_top;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *kommi_main)
    {
        if (kommi_main->objectName().isEmpty())
            kommi_main->setObjectName(QString::fromUtf8("kommi_main"));
        kommi_main->resize(1288, 600);
        centralwidget = new QWidget(kommi_main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        table = new QTableWidget(centralwidget);
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
        table->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        table->setItem(0, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        table->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        table->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        table->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        table->setItem(1, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        table->setItem(1, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        table->setItem(1, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        table->setItem(2, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        table->setItem(2, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        table->setItem(2, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        table->setItem(2, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        table->setItem(2, 4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        table->setItem(2, 5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        table->setItem(3, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        table->setItem(3, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        table->setItem(3, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        table->setItem(3, 3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        table->setItem(3, 4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        table->setItem(3, 5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        table->setItem(4, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        table->setItem(4, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        table->setItem(4, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        table->setItem(4, 3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        table->setItem(4, 4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        table->setItem(4, 5, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        table->setItem(5, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        table->setItem(5, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        table->setItem(5, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        table->setItem(5, 3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        table->setItem(5, 4, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        table->setItem(5, 5, __qtablewidgetitem47);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(0, 100, 771, 261));
        table->setStyleSheet(QString::fromUtf8(""));
        table->horizontalHeader()->setVisible(false);
        table->horizontalHeader()->setCascadingSectionResizes(false);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 400, 93, 28));
        number_top = new QLineEdit(centralwidget);
        number_top->setObjectName(QString::fromUtf8("number_top"));
        number_top->setGeometry(QRect(1020, 120, 51, 31));
        kommi_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(kommi_main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1288, 26));
        kommi_main->setMenuBar(menubar);
        statusbar = new QStatusBar(kommi_main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        kommi_main->setStatusBar(statusbar);

        retranslateUi(kommi_main);

        QMetaObject::connectSlotsByName(kommi_main);
    } // setupUi

    void retranslateUi(QMainWindow *kommi_main)
    {
        kommi_main->setWindowTitle(QApplication::translate("kommi_main", "kommi_main", nullptr));
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
        ___qtablewidgetitem13->setText(QApplication::translate("kommi_main", "26", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = table->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("kommi_main", "42", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = table->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("kommi_main", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = table->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("kommi_main", "29", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = table->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("kommi_main", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = table->item(1, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("kommi_main", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = table->item(1, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("kommi_main", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = table->item(1, 2);
        ___qtablewidgetitem20->setText(QApplication::translate("kommi_main", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = table->item(1, 3);
        ___qtablewidgetitem21->setText(QApplication::translate("kommi_main", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = table->item(1, 4);
        ___qtablewidgetitem22->setText(QApplication::translate("kommi_main", "30", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = table->item(1, 5);
        ___qtablewidgetitem23->setText(QApplication::translate("kommi_main", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = table->item(2, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("kommi_main", "20", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = table->item(2, 1);
        ___qtablewidgetitem25->setText(QApplication::translate("kommi_main", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = table->item(2, 2);
        ___qtablewidgetitem26->setText(QApplication::translate("kommi_main", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = table->item(2, 3);
        ___qtablewidgetitem27->setText(QApplication::translate("kommi_main", "35", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = table->item(2, 4);
        ___qtablewidgetitem28->setText(QApplication::translate("kommi_main", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = table->item(2, 5);
        ___qtablewidgetitem29->setText(QApplication::translate("kommi_main", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = table->item(3, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("kommi_main", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = table->item(3, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("kommi_main", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = table->item(3, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("kommi_main", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = table->item(3, 3);
        ___qtablewidgetitem33->setText(QApplication::translate("kommi_main", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = table->item(3, 4);
        ___qtablewidgetitem34->setText(QApplication::translate("kommi_main", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = table->item(3, 5);
        ___qtablewidgetitem35->setText(QApplication::translate("kommi_main", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = table->item(4, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("kommi_main", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = table->item(4, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("kommi_main", "46", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = table->item(4, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("kommi_main", "27", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = table->item(4, 3);
        ___qtablewidgetitem39->setText(QApplication::translate("kommi_main", "48", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = table->item(4, 4);
        ___qtablewidgetitem40->setText(QApplication::translate("kommi_main", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = table->item(4, 5);
        ___qtablewidgetitem41->setText(QApplication::translate("kommi_main", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = table->item(5, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("kommi_main", "23", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = table->item(5, 1);
        ___qtablewidgetitem43->setText(QApplication::translate("kommi_main", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = table->item(5, 2);
        ___qtablewidgetitem44->setText(QApplication::translate("kommi_main", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = table->item(5, 3);
        ___qtablewidgetitem45->setText(QApplication::translate("kommi_main", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = table->item(5, 4);
        ___qtablewidgetitem46->setText(QApplication::translate("kommi_main", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = table->item(5, 5);
        ___qtablewidgetitem47->setText(QApplication::translate("kommi_main", "M", nullptr));
        table->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("kommi_main", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kommi_main: public Ui_kommi_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOMMI_MAIN_H
