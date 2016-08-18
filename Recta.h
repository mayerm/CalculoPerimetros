
#ifndef Recta
#define Recta
#include "Punto.h"
	struct RectaType { PuntoType p0, p1; };
	double getLongitud(PuntoType p0, PuntoType p1);
	PuntoType getPuntoMedio(PuntoType p0, PuntoType p1);
	PuntoType getVector(PuntoType p0, PuntoType p1);
	RectaType setRecta(PuntoType p0, PuntoType p1);
#endif
