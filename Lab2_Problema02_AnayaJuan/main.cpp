/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 2. Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
y luego imprima cuantas veces se repite cada letra en el arreglo.
Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe imprimir: ABARSECAAB
A: 4
B: 2
C: 1
Y así sucesivamente.

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    char randomArray[200]; // Arreglo que almacenara letras aleatorias

    /* Se imprime la funcion del programa */
    cout << "Este programa genera un arreglo aleatorio, luego lo imprime y dice cuantas veces se repite "
            "cada letra dentro del arreglo.\n" << endl;

    srand(time(NULL));

    /* Aqui se generan letras aleatorias que se agregan al arreglo 'randomArray' y se imprimen */
    for(int i=0; i<200; ++i){
        randomArray[i] = char(65+rand()%26);
        cout << randomArray[i];
    }

    cout << endl;

    /* Aqui se calcula e imprime cuantas veces se repite cada letra dentro del arreglo */
    for(int i=65, counter; i<=90; ++i){

        counter=0; // Contador de repeticiones para cada letra

        for(int j=0; j<200; ++j){
            if(char(i) == randomArray[j]){
                counter++;
            }
        }
        cout << char(i) << ": " << counter << endl;
    }

    return 0;
}
