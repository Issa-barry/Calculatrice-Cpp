#ifndef VUE_H
#define VUE_H

#include <QApplication>
#include <QWidget>
#include <QBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>

class vue:public QWidget{
    public:
        vue();
    private:
        QVBoxLayout *_fenetrePrincipale;
        QHBoxLayout *_partieResultat;
        QLineEdit *_operation, *_resultat;
        QHBoxLayout *_partieCalculatrice;
        QGridLayout *_chiffre, *_operateur;
        QPushButton *_un, *_deux, *_trois, *_quatre, *_cinq, *_six, *_sept, *_huit, *_neuf, *_zero, *_virgule;
        QPushButton *_plus, *_moins, *_mul, *_div, *_parO, *_parF, *_carre, *_egale;

};

#endif // VUE_H
