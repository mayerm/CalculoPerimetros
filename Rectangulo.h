
#ifndef Rectangulo
#define Rectangulo
#include "Recta.h"
	struct RectanguloType { PuntoType p, q; double b, h; };
	RectanguloType setRectangulo(PuntoType p, PuntoType q, double b, double h);
	double getPerimRectang(RectanguloType rectangulo);
#endif