#ifndef Circulo
#define Circulo
#include "Recta.h"
	struct CirculoType { PuntoType centro; double radio; };
	CirculoType setCirculo(PuntoType centro, double radio);
	double getCircunferencia(CirculoType circulo);
#endif
