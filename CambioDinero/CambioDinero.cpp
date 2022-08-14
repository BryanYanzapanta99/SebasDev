// CambioDinero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Cambio.h"
int main()
{
    Cambio c;
	int cantidad = 0;
	int d[100] = {50,25,10,5,1};
	int n = 5;
	cout << "Ingrese la cantidad de monedas  a cambiar: ";
	cin >> cantidad;
	c.backtraking(cantidad, d, n, 0);
}

