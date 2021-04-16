/**
RECUERDEN PONER SIEMPRE EN LOS .H LAS DIRECTIVAS DE PRECOMPILACION QUE INICIAN CON #
**/
#ifndef _MI_PUNTO
#define _MI_PUNTO
class Punto {
	private:
	   double x;
	   double y;
	public:
	   Punto();
	   Punto(double, double);
	   ~Punto(); // Destructor
	   void imprimir(); // Presenta en salida estandar los valores del punto
	   double getX();
	   double getY();
	   void setX(double);
	   void setY(double);
};
#endif