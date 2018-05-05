//
// Created by djalma cunha on 04/05/2018.
//

#include "Retangulo.h"

Retangulo::Retangulo(float x, float y) {
    x = this->x;
    y = this->y;
    area = calc_area();
}

float Retangulo::calc_area() {
    return x * y;
}

int Retangulo::operator/(Retangulo &r) {
    return (this-> area/ r.area);
}