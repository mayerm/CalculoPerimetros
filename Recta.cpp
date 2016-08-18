#include "Recta.h"
#include <math.h>

double getLongitud(PuntoType p0, PuntoType p1){
	return sqrt(
		pow(p1.x - p0.x, 2) + 
		pow(p1.y - p0.y, 2)
		);
}
PuntoType getPuntoMedio(PuntoType p0, PuntoType p1){
	return PuntoType { 
		(p0.x + p1.x) / 2,
		(p0.y + p1.y) / 2 
	};
}
PuntoType getVector(PuntoType p0, PuntoType p1){
	return PuntoType { 
		p0.x - p1.x, 
		p0.y + p1.y 
	};
}
RectaType setRecta(PuntoType p0, PuntoType p1){
	return RectaType{ p0, p1 };
}