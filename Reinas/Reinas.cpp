/*
	Universidad de las Fuerzas Armadas "ESPE"
	Ingenieria de Software
	Autores:
	@Fausto Vizuete
	@Sebastian Yanzapata
	@Jonathan Zapata
	@Christopher Yepez
	@Vanessa Zurita
	Enunciado: reinas
	Fecha de creacion: 05/09/2021
	Fecha de modificacion: 06/09/2021
*/
#include <iostream>
#include "Reina.h"
int main()
{
    Reina r;
	int k = 0;
	int cantidad;
	cout << "Ingrese el tamaño del tablero\n";
	cin >> cantidad;
	int* reinas = new int[cantidad];
	for (int i = 0; i < cantidad; i++)
	{
		*(reinas+i) = -1;
	}
	r.Nreinas(reinas, cantidad, k);
}

