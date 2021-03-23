#include "vue.h"

vue::vue():
    QWidget(){

    /*************** Partie 1 ***************/

        /* Partie operation et resultat */

        _operation = new QLineEdit;
        _operation->setReadOnly(true);
        _operation->setStyleSheet("background : #00FF7F");

        _resultat = new QLineEdit;
            _resultat->setReadOnly(true);
            _resultat->setStyleSheet("background : #00FF7F");
            _resultat->setFixedWidth(90);


        /* Partie horizontale du resultat */

        _partieResultat = new QHBoxLayout;
            _partieResultat->setAlignment(Qt::AlignRight);
            _partieResultat->addWidget(_resultat);



    /********* lyoma ghan9ra interface graphique anmchi ldar ankmal cours dyal caml o td dyal caml
rda ghanbda tp1 dyal base de donnée ansalih an9ra python *******************************/

    /*************** Partie 2 ***************/

        /* Partie chiffres */

        _un = new QPushButton("1");
        _deux = new QPushButton("2");
        _trois = new QPushButton("3");
        _quatre = new QPushButton("4");
        _cinq = new QPushButton("5");
        _six = new QPushButton("6");
        _sept = new QPushButton("7");
        _huit = new QPushButton("8");
        _neuf = new QPushButton("9");
        _zero = new QPushButton("0");
        _virgule = new QPushButton(",");

        _chiffre = new QGridLayout;
        _chiffre->setSpacing(0);
            _chiffre->addWidget(_sept,0,0);
            _chiffre->addWidget(_huit,0,1);
            _chiffre->addWidget(_neuf,0,2);
            _chiffre->addWidget(_quatre,1,0);
            _chiffre->addWidget(_cinq,1,1);
            _chiffre->addWidget(_six,1,2);
            _chiffre->addWidget(_un,2,0);
            _chiffre->addWidget(_deux,2,1);
            _chiffre->addWidget(_trois,2,2);
            _chiffre->addWidget(_zero,3,0,1,2);
            _chiffre->addWidget(_virgule,3,2);

        /* Partie operateur */

        _plus = new QPushButton("+");
        _moins = new QPushButton("-");
        _mul = new QPushButton("*");
        _div = new QPushButton("/");
        _parO = new QPushButton("(");
        _parF = new QPushButton(")");
        _carre = new QPushButton("^2");
        _egale = new QPushButton("=");

        _operateur = new QGridLayout;
        _operateur->setSpacing(0);
            _operateur->addWidget(_plus,0,0);
            _operateur->addWidget(_moins,0,1);
            _operateur->addWidget(_mul,1,0);
            _operateur->addWidget(_div,1,1);
            _operateur->addWidget(_parO,2,0);
            _operateur->addWidget(_parF,2,1);
            _operateur->addWidget(_carre,3,0);
            _operateur->addWidget(_egale,3,1);


        /* Partie horizontale de la calculatrice */

        _partieCalculatrice = new QHBoxLayout;
            _partieCalculatrice->addStretch(1);
            _partieCalculatrice->addLayout(_chiffre);
            _partieCalculatrice->addStretch(1);
            _partieCalculatrice->addLayout(_operateur);
            _partieCalculatrice->addStretch(1);

    /****************************************/

    /*************** Partie Finale ***************/

        /* Fenetre principale */

        _fenetrePrincipale = new QVBoxLayout(this);
            _fenetrePrincipale->addStretch(1);
            _fenetrePrincipale->addWidget(_operation);
            _fenetrePrincipale->addLayout(_partieResultat);
            _fenetrePrincipale->addStretch(1);
            _fenetrePrincipale->addLayout(_partieCalculatrice);
            _fenetrePrincipale->addStretch(1);

        this->setLayout(_fenetrePrincipale);
        this->setWindowTitle("Ma calculatrice");
        //this->setStyleSheet("background : #7FFFD4");

    /*********************************************/
}

