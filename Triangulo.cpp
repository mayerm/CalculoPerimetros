#include "Triangulo.h"
 
TrianguloType setTriangulo(PuntoType a, PuntoType b, PuntoType c){
	return TrianguloType{ a, b, c };
}

double getPerimTriang(TrianguloType triangulo){
	return getLongitud(triangulo.vertice1, triangulo.vertice2) +
		   getLongitud(triangulo.vertice2, triangulo.vertice3) +
		   getLongitud(triangulo.vertice3, triangulo.vertice1);
}
