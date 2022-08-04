/*
	Universidad de las Fuerzas Armadas "ESPE"
	Ingenieria de Software
	Autores:
	@Fausto Vizuete
	@Sebastian Yanzapata
	@Jonathan Zapata
	@Christopher Yepez
	@Vanessa Zurita
	Enunciado: 
	Fecha de creacion: 0/09/2021
	Fecha de modificacion: 06/09/2021
*/
#include <iostream>
#include <fstream>
#include "Laberinto.h"
int main()
{
	Laberinto l;
	printf("----------Laberinto------------\n");
    int maze[N][N] = { { 1, 0, 0, 0 },
                    { 1, 1, 0, 1 },
                    { 0, 1, 0, 0 },
                    { 1, 1, 1, 1 }, };
    l.resolverLab(maze);  
    l.leerArchivo("laberinto.txt",maze);
    return 0;
}
