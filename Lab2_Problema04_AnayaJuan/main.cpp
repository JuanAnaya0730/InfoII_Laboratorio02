/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 4. Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número entero
y retorne dicho número. Escriba un programa de prueba.
Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.

*/

#include <iostream>

using namespace std;

/* Esta funcion recibe una cadena de caracteres numericos y la retorna como entero */
long int charToInt(char []);

int main()
{
    char arrayChar[100];

    /* Se imprime la funcion del programa */
    cout << "Este programa recibe una cadena de caracteres numericos y luego por medio de "
            "una funcion interna la pasa a datos enteros.\n" << endl;

    /* Se pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> arrayChar;

    /* Se imprime la cadena original y el numero entero resultado de la transformacion */
    cout << "\nCadena original: " << arrayChar << endl;
    cout << "Cadena transformada: " << charToInt(arrayChar) << endl;

    return 0;
}

long int charToInt(char numChar[]){

    // Variable que almacenara la cadena convertida a entero
    long int numInt = 0;

    /* Aqui se convieten uno a uno los caracteres a su respectivo valor entero */
    for(int i=0; numChar[i] != '\0'; ++i){
            numInt = numInt * 10 + (numChar[i] - 48);
    }

    /* Se retorna el equivalente a entero de la cadena ingresada */
    return numInt;
}
