//
// Created by djalma cunha on 04/05/2018.
//

#ifndef SOBRECARGA_DE_OPERADOR_LOGICA_H
#define SOBRECARGA_DE_OPERADOR_LOGICA_H


class Logica {
public:
    int aa;
    int bb;
    int somaTudo;
Logica(int, int);
    //Complexo operator+(Complexo c);
    Logica operator+(Logica x);
    int setSoma();

    int operator/(Logica &);
};


#endif //SOBRECARGA_DE_OPERADOR_LOGICA_H
