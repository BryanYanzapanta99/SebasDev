#include "Mochila.h"
#include <iostream>
using namespace std;


int main()
{
    Mochila mo;
    int n, pMax;
    cout << "Ingrese la cantidad de articulos en la mochila: ";
    cin >> n;
    int* peso = new int[n];
    int* valor = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el peso del objeto" << i + 1 << ": ";
        cin >> peso[i];
        cout << "" << i + 1 << "Ingrese el valor del objeto: ";
        cin >> valor[i];
        cout << "\n";
    }
    cout << "Ingrese el peso maximo da mochila: ";
    cin >> pMax;
    mo.mochila(n, peso , valor, pMax);

    return 0;
}

