//
// Created by djalma cunha on 04/05/2018.
//

#ifndef SOBRECARGA_DE_OPERADOR_COMPLEXO_H
#define SOBRECARGA_DE_OPERADOR_COMPLEXO_H


class Complexo {
public:
    Complexo(int r, int i);
    Complexo operator+(Complexo c);

    int real;
    int imaginario;
};


#endif //SOBRECARGA_DE_OPERADOR_COMPLEXO_H
