
#ifndef Triangulo
#define Triangulo
#include "Recta.h"

	struct TrianguloType { 
		PuntoType vertice1, 
				  vertice2, 
				  vertice3; 
	};
	TrianguloType setTriangulo(PuntoType a, PuntoType b, PuntoType c);
	double getPerimTriang(TrianguloType triangulo);
#endif