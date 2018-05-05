//
// Created by djalma cunha on 04/05/2018.
//

#include "Complexo.h"
Complexo::Complexo(int r, int i) {
    real = r;
    imaginario = i;
}

Complexo Complexo::operator+(Complexo c) {
    return Complexo(this->real + c.real, this->imaginario + c.imaginario);
}

