#include "Circulo.h"
const double PI = 3.141592653589793;

CirculoType setCirculo(PuntoType centro, double radio){
	return CirculoType{ centro, radio };
}

double getCircunferencia(CirculoType circulo){
	return (PI * 2 * circulo.radio);
}
