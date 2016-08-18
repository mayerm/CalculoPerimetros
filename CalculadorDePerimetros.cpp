// CalculadorDePerimetros.cpp : Calcula perimetros de un rectángulo y un triángulo, y la circunferencia de un círculo.
//

#include <iostream>
#include <math.h>
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Circulo.h"

using namespace std;
int main()
{
	double a, b, c, d, e, f, radio, base, altura;
	cin >> a >> b >> c >> d >> e >> f >> radio >> base >> altura;
	PuntoType p = Punto::setPunto(a, b);
	cout << "Punto P\n(" << p.x << "," << p.y << ")";
	PuntoType q = Punto::setPunto(c, d);
	PuntoType r = Punto::setPunto(e, f);
	CirculoType circulo = Circulo::setCirculo(p, radio);
	cout << "Circulo\n Centro: (" << circulo.centro.x << "," << circulo.centro.y <<
		")\nRadio: " << circulo.radio << "\nCircunferencia: " << Circulo::getCircunferencia(circulo);
	RectanguloType rectangulo = Rectangulo::setRectangulo(p, q, base, altura);
	cout << "Rectangulo\n Puntos: (" << rectangulo.p.x << "," << rectangulo.p.y
		<< "), (" << rectangulo.q.x << "," << rectangulo.q.y << ")\nBase: " << rectangulo.b
		<< "\nAltura: " << rectangulo.h << "\nPerimetro de Rectangulo: " << Rectangulo::getPerimRectang(rectangulo);
	TrianguloType triangulo = Triangulo::setTriangulo(p, q, r);
	cout << "\nTriangulo\nVertices: (" << triangulo.vertice1.x << "," << triangulo.vertice1.y
		<< "), (" << triangulo.vertice2.x << "," << triangulo.vertice2.y << "), (" 
		<< triangulo.vertice3.x << "," << triangulo.vertice3.y <<
		")\nPerimetro del Triangulo: " << Triangulo::getPerimTriang(triangulo);
}
