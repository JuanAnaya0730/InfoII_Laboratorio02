/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 6. Escriba un programa que reciba una cadena de caracteres y cambie las letras minúsculas
por mayúsculas, los demás caracteres no deben ser alterados.
Ejemplo: se recibe Man-zana debe mostrar MAN-ZANA.
Nota: la salida del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA.

*/

#include <iostream>

using namespace std;

int main()
{
    char charString[50]; // Array que almacenara la cadena ingresada

    /* Se imprime en pantalla la funcion del programa. */
    cout << "Este programa recibe una cadena de caracteres y cambia las letras minusculas por mayusculas.\n"
            "Nota: Los caracteres diferentes a letras minusculas no seran modificados.\n" << endl;

    /* Se le pide al usuario que ingrese una cadena de caracteres */
    cout << "Ingrese la cadena de caracteres: ";
    cin.getline(charString, 50);

    /* Se imprime la cadena original */
    cout << "\nOriginal: " << charString << endl;

    for(int i=0; charString[i] != '\0'; ++i){
        if(charString[i] >= 97 && charString[i] <= 122){
            charString[i] -= 32;
        }
    }

    /* Se imprime la cadena ingresada en mayusculas */
    cout << "Mayuscula: " << charString << endl;

    return 0;
}
