#include "mainwindow.h"
#include "Dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Dialog dlg;
    dlg.exec();

    return a.exec();
}
