#include "Rectangulo.h"


RectanguloType setRectangulo(PuntoType p, PuntoType q, double b, double h){
	
	RectanguloType rectangulo{ p,q,b,h};
	return rectangulo;
	/*rectangulo.p = p;
	rectangulo.q = q; 
	rectangulo.b = b;
	rectangulo.h = h;*/
}


double getPerimRectang(RectanguloType rectangulo){
	return (2 * (rectangulo.b + rectangulo.h));
}

