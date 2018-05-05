//
// Created by djalma cunha on 04/05/2018.
//

#ifndef SOBRECARGA_DE_OPERADOR_RETANGULO_H
#define SOBRECARGA_DE_OPERADOR_RETANGULO_H


class Retangulo {
public:
    Retangulo(float,float);
    float calc_area();
    //tem que ser uma classe criada
    int operator/(Retangulo &r);

    float x;
    float y;
    float area;
};


#endif //SOBRECARGA_DE_OPERADOR_RETANGULO_H
