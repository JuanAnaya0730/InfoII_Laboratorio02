/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 16. En una malla de 2x2, realizando únicamente movimientos hacia la derecha y hacia abajo hay 6
posibles caminos para llegar de la esquina superior izquierda a la inferior derecha como se observa en la Figura 7.

                            Figura 7: Ver pdf

Escriba un programa que reciba un numero n y calcule el número de caminos posibles en una cuadricula de nxn.
Nota: la salida del programa debe ser:
Para una malla de 2x2 puntos hay 6 caminos.

*/

#include <iostream>

using namespace std;

/* Esta funcion calcula el factorial de un numero */
double factorial(int);

int main()
{
    int meshSize; // Variable que almacena el tamaño de la malla
    double paths; // Variable que almacenara en numero de caminos posibles

    /* Se imprime la funcion del programa */
    cout << "Este programa recibe un numero entero(n) que corresponde a las dimensiones de una malla(nxn), "
            "luego se imprime cuantos caminos hay para llegar de la esquina superior izquierda a la "
            "inferior derecha de dicha malla.\n " << endl;

    /* Se le pide al usuario que ingrese el tamaño de la malla */
    cout << "Ingrese el tamano de la malla: ";
    cin >> meshSize;

    /* Aqui se calculan los caminos posibles */
    paths = factorial(2*meshSize) / (factorial(meshSize)*factorial(meshSize));

    /* Se imprime un mensaje que informa cuantos caminos posibles existen(teniendo en cuenta las reglas) */
    cout << "\nPara una malla de " << meshSize << "x" << meshSize << " puntos hay " << paths << " caminos." << endl;

    return 0;
}

double factorial(int num) {
    /* Esta funcion calcula el factorial de un numero */

    double factorial = 1;

    for(int i=num; i>1; --i){
        factorial *= i;
    }

    return factorial;
}
