/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 8. Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original.
Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
Nota: la salida del programa debe ser:
Original: abc54rst.
Texto: abcrst. Numero: 54

*/

#include <iostream>

using namespace std;

int main()
{
    char charString[50]="", textString[50]="", numericString[50]="";

    /* Se imprime en pantalla la funcion del programa. */
    cout << "Este programa recibe una cadena de caracteres y separa los caracteres "
            "numericos de los no numericos.\n" << endl;

    /* Se le pide al usuario que ingrese la cadena de caracteres */
    cout << "Ingrese la cadena de caracteres: ";
    cin.getline(charString, 50);

    /* Aqui se separan los caracteres numericos de los no numericos */
    for(int i=0, texIndex=0, numIndex=0; charString[i] != '\0'; ++i){

        /* Se verifica si el caracter de determinada posicion es numerico */
        if(charString[i] >= 48 && charString[i] <= 57){
            numericString[numIndex] = charString[i];
            numIndex++;
        }else{
            textString[texIndex] = charString[i];
            texIndex++;
        }
    }

    /* Se imprime la cadena original */
    cout << "\nOriginal: " << charString  << endl;

    /* Se imprimen por separado los caracteres numericos y no numericos de la cadena original */
    cout << "Texto: " << textString << " Numero: " << numericString << endl;

    return 0;
}
