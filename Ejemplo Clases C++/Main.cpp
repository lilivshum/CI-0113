#include<iostream>
using namespace std;
#include "Punto.h"
int main(){
   Punto p;
   Punto p2(3.14,2.66);
   cout << "Punto 1 es "<< endl;
   p.imprimir();

   cout << "Punto 2 es "<< endl;
   
   p2.imprimir();
   cout << "el y de ambos puntos es: "<< p.getY() << "   " << p2.getY()<< endl;
   
   return 0;
}