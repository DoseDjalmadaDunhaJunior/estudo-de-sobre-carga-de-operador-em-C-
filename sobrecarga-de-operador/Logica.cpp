//
// Created by djalma cunha on 04/05/2018.
//

#include "Logica.h"

Logica::Logica(int a, int b) {
    aa = a;
    bb = b;
    setSoma();
}

int Logica::setSoma() {
    somaTudo = aa+bb;
}


//colocando mais as parcelas se somam
Logica Logica::operator+(Logica x) {
    return Logica(this->aa + x.aa, this->bb + x.bb);
    }

    int Logica::operator/(Logica &x) {
        return (this->somaTudo + x.somaTudo);
}
