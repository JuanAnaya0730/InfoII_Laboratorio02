/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 12. Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los números
en cada columna, cada fila y cada diagonal principal tienen como resultado la misma constante. Escriba un programa
que permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique si la matriz es un cuadrado
mágico.

*/

#include <iostream>

using namespace std;

int find(int array[100][100], int num, int size);
bool equalSums(int array[100], int size);
void printMatrix(int array[100][100], int size);
int len_numero(int num);

int main()
{
    int size, matrix[100][100]={}, values[500]={}, aux=0, positions;
    bool _continue = true;

    // Se imprime en patalla la funcion del programa
    cout << "Este programa recibe numeros enteros que formaran una matriz cuadrada e imprimira "
            "en pantalla si la matriz ingresada corresponde a un cuadrado magico.\n" << endl;

    // Se le pide al usuario que ingrese el orden de la matriz
    cout << "Indique el orden de la matriz cuadrada: ";
    cin >> size;

    for(int i=0; i<size; i++){
        cout << endl;
        for(int h=0; h<size; h++){
            cout << "Valor para la posicion fila(" << i+1 << ") columna(" << h+1 << "): ";
            cin >> matrix[i][h];
            if(find(matrix, matrix[i][h], size)>1){
                cout << "\nNo se pueden repetir valores." << endl;
                _continue = false;
                break;
            }
        }
        if(_continue==false){
            break;
        }
    }
    if(_continue==true){

        printMatrix(matrix,size);

        positions=0;

        // filas
        for(int i=0; i<size; i++){
            for(int h=0; h<size; h++){
                aux+=matrix[i][h];
            }
            values[positions]=aux;
            positions++;
            aux=0;
        }

        // columnas
        for(int i=0; i<size; i++){
            for(int h=0; h<size; h++){
                aux+=matrix[h][i];
            }
            values[positions]=aux;
            positions++;
            aux=0;
        }

        // diagonal 1
        for(int i=0; i<size; i++){
            for(int h=0; h<size; h++){
                if(h==i){
                    aux+=matrix[h][i];
                }
            }
        }
        values[positions]=aux;
        positions++;

        aux=0;
        // diagonal 2
        for(int i=0; i<size; i++){
            for(int h=size-1; h>=0; h--){
                if((i+h)==size-1){
                    aux+=matrix[i][h];
                }
            }
        }
        values[positions]=aux;
        positions++;

        if(equalSums(values, size)==true){
            cout << "\n\nEs un cuadrado magico." << endl;
        }
        else{
            cout << "\n\nNo es un cuadrado magico." << endl;
        }

    }

    return 0;
}

int find(int array[100][100], int num, int size){
    int encontrado=0;
    for(int i=0; i<size; i++){
        for(int h=0; h<size; h++){
            if(array[i][h]==num){
                encontrado+=1;
            }
        }
    }

    return encontrado;
}

bool equalSums(int array[100], int size){
    bool iguales=true;
    for(int i=0; i<(size*2)+2; i++){
        if(array[1]!=array[i]){
            iguales=false;
            return iguales;
        }
    }

    return iguales;
}

void printMatrix(int array[100][100], int size){
    int mayores[100]={}, guiones=(size*3)+1, espacios;

    for(int i=0; i<size; i++){
        for(int h=0; h<size; h++){
            if(len_numero(array[h][i])>mayores[i]){
                mayores[i]=len_numero(array[h][i]);
            }
        }
    }

    for(int h=0; h<size; h++){
        guiones+=mayores[h];
    }

    cout << "\n ";
    for(int h=0; h<guiones; h++){
        cout << "-";
    }
    for(int i=0; i<size; i++){
        cout << endl;
        cout << " | ";
        for(int h=0; h<size; h++){
            espacios=len_numero(array[i][h]);
            cout << array[i][h];
            while(espacios<mayores[h]){
                cout << " ";
                espacios++;
            }
            cout << " | ";
        }
        cout << "\n ";
        for(int h=0; h<guiones; h++){
            cout << "-";
        }
    }
}

int len_numero(int num){
    int contador=0;
    while(num!=0){
        num/=10;
        contador++;
    }

    return contador;
}
