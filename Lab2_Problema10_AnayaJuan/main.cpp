/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 10. Escribir un programa que permita convertir un número en el sistema romano al sistema arábigo
usado actualmente. A continuación se encuentran los caracteres usados en el sistema romano y su equivalente arábigo:
M: 1000
D: 500
C: 100
L: 50
X: 10
V: 5
I: 1

Los números romanos se forman usando estos caracteres en base a dos reglas:
    Si un carácter esta seguido por uno de igual o menor valor, su valor se suma al total.
    Si un carácter esta seguido por uno de mayor valor, su valor se resta del total.

Ejemplo: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174.
Nota: la salida del programa debe ser:
El número ingresado fue: DCLXVI
Que corresponde a: 666.

*/

#include <iostream>

using namespace std;

/* Esta funcion busca un caracter dentro de un arreglo y retorna su posicion */
int index(char [], char);
/* Esta funcion retorna el tamaño de un arreglo */
int len(char []);

int main()
{
    /* Se define el valor de cada numero romano de menor a mayor y se inicializa la variable
    que almacenara el equivalente en arabigo del numero romano ingresado */
    int arabicNums[7]={1000,500,100,50,10,5,1}, arabicNumber = 0;

    /* Se define un arreglo con los numeros romanos y se inicializa otro arreglo que almacenara
    el numero romano que sea ingresado */
    char romanNums[7]={'M', 'D', 'C', 'L', 'X', 'V', 'I'}, romanNumber[50] = "";

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa convierte numeros romanos a su equivalente en decimal.\n"
            "NOTA: Ingrese el numero romano en letras mayusculas.\n" << endl;

    /* Se le pide al usuario que ingrese el numero romano a convertir */
    cout << "Ingrese el numero romano: ";
    cin >> romanNumber;

    for(int i=0; i <= len(romanNumber)-2; ++i){

        /* Aqui se verifica si el numero romano que esta despues de uno seleccionado es de mayor o menor valor
        al mismo, dependiendo el caso se aplica la regla indicada */
        if(index(romanNums, romanNumber[i]) <= index(romanNums, romanNumber[i+1])){
            arabicNumber += arabicNums[index(romanNums, romanNumber[i])];
        }else{
            arabicNumber -= arabicNums[index(romanNums, romanNumber[i])];
        }
    }

    /* Se le suma el equivalente al ultimo numero romano ya que este siempre sumara al valor final */
    arabicNumber += arabicNums[index(romanNums, romanNumber[len(romanNumber)-1])];

    /* Se imprime el numero romano que se ingreso y su equivalente en arabigo */
    cout << "El numero ingresado fue: " << romanNumber << endl;
    cout << "Que corresponde a: " << arabicNumber << endl;

    return 0;
}

int index(char array[], char charToFind){
    /* Esta funcion busca un caracter dentro de un arreglo y retorna su posicion */

    for(int index=0; array[index] != '\0'; ++index){
        if(array[index] == charToFind){
            return index;
        }
    }

    return -1;
}

int len(char array[]){
    /* Esta funcion retorna el tamaño de un arreglo */

    int length = 0;

    for(int index=1; array[index-1] != '\0'; ++index){
        length = index;
    }

    return length;
}
