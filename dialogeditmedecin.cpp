#include "dialogeditmedecin.h"
#include "ui_dialogeditmedecin.h"

DialogEditMedecin::DialogEditMedecin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMedecin)
{
    ui->setupUi(this);
}

DialogEditMedecin::~DialogEditMedecin()
{
    delete ui;
}
