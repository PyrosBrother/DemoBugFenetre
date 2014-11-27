#ifndef DIALOGEDITMEDECIN_H
#define DIALOGEDITMEDECIN_H

#include <QDialog>

namespace Ui {
class DialogMedecin;
}

class DialogEditMedecin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditMedecin(QWidget *parent = 0);
    ~DialogEditMedecin();

private:
    Ui::DialogMedecin *ui;
};

#endif // DIALOGEDITMEDECIN_H
