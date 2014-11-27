#include "mainwindow.h"
#include "Dialog.h"
#include "dialogeditmedecin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    DialogEditMedecin dlgMedecin;
    dlgMedecin.exec();

//    Dialog dlg;
//    dlg.exec();

    return a.exec();
}
