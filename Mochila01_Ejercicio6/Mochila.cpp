#include "Mochila.h"
using namespace std;

void Mochila::mochila(int n, int* peso, int* valor, int pMax)
{
    int* a = new int[pMax];    //vector peso
    int* temp = new int[pMax]; //vector valor
    int aux; //auxiliar

    for (int i = 0; i <= pMax; i++) {      // Manejo de eerores
        a[i-1] = 0;                        //  no permite pesos con 0
        temp[i-1] = -1;                   //   no permite valores negativos
    }



    for (int i = 1; i <= pMax; i++) { // desde 1 hasta el peso máximo de la mochila
        for (int j = 0; j < n; j++) { // de 0 a la cantidad de artículos en la mochila
            if ((peso[j] <= i) && (a[i] < a[i - peso[j]] + valor[j])) {  //Verificación de costo-beneficio
                a[i] = a[i - peso[j]] + valor[j]; //Suma el valor total de la mochila
                temp[i] = j;
            }
        }
    }

    aux = pMax;
    while ((aux > 0) && (temp[aux] != -1)) {
        cout << "articulo" << temp[aux] + 1 << " ($ " << valor[temp[aux]] << ", " << peso[temp[aux]] << " Kg) Espacio disponible: " << aux - peso[temp[aux]] << "\n";
        aux -= peso[temp[aux]];
    }
    cout << "valor total: $" << a[pMax] << "\n";

}
