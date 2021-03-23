#pragma once
#include "vue.h"
#include "calc.h"
#include <iostream>
class Traducteur: public QObject
{
    Q_OBJECT
public:
    Traducteur();

//
private:
    vue  _maVue;
    Calc _moteur;
};

