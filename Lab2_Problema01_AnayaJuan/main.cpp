/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 1. Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para
una cantidad de dinero determinada. Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000
y $1.000, y las monedas son de $500, $200, $100 y $50. Hacer un programa que entregue el número de billetes
y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y monedas
disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. Use arreglos
y ciclos para realizar el programa.
Ejemplo: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10

*/

#include <iostream>

using namespace std;

int main()
{
    /* Se imprime la funcion del programa */
    cout << "Este programa determina la minima combinacion de billetes y monedas para una cantidad "
            "de dinero ingresada, los billetes y monedas que se usaran para la combinacion seran "
            "los siguientes: 50k, 20k, 10k, 5k, 2k, 1k, 500, 200, 100 y 50.\n" << endl;

    int billsAndCoins[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50}; // Denominciones en circulacion
    int money; // Variable que almacenara ek dinero ingresado

    /* Se le pide al usuario que ingrese la cantidad de dinero a la que se le calculara su combinacion */
    cout << "Ingrese la cantidad de dinero: ";
    cin >> money;

    /* Se calcula e imprime la minica combinacion para la cantidad ingresada de dinero */
    for(int i=0; i<10; ++i){
        cout << billsAndCoins[i] << ": " << money/billsAndCoins[i] << endl;
        money %= billsAndCoins[i];
    }

    /* Se imprime el faltante */
    cout << "Faltante: " << money << endl;

    return 0;
}
