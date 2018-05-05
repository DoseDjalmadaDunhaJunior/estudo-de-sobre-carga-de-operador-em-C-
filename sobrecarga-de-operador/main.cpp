#include <iostream>
#include "Logica.h"
using namespace std;
int main() {
    //basicamente forca a somar parcela por parcela
    Logica oi(1,8), oi2(2,8);
    Logica resp = oi + oi2;

    //basicamente forca a somar
    int aux = oi/oi2;
    cout<<resp.aa<<endl;
    cout<<resp.bb<<endl;
    cout<<aux<<endl;
    return 0;
}