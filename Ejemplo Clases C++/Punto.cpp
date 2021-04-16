#include "Punto.h"
#include<iostream>
using namespace std;

Punto::Punto(){
   cout << "Se crea el punto (0,0)" << endl;
   x = 0.0;
   y = 0.0;   
}

Punto::Punto(double x,double y){
    cout << "Se crea el punto (" << x << ","<< y << ")" << endl;	
	this->x = x;
	this->y = y;
}

Punto::~Punto(){
    cout << "El punto (" << x << ","<< y << ") va a morir" << endl;		
}

void Punto::imprimir(){
	cout << "(" << x << ","<< y << ")" << endl;	
}

double Punto::getX(){
   return x;	
}

double Punto::getY(){
   return y;	
}

void Punto::setX(double x){
	this->x = x;
}

void Punto::setY(double y){
	this->y = y;	
}