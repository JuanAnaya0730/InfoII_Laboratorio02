/*
                          INFORMATICA II
Grupo 05
Juan Sebastian Anaya Regino

Problema 14. Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
imprima la matriz rotada 90, 180 y 270 grados.

*/
#include <iostream>

using namespace std;

#define N 5

void printMatrix(int array[N][N], int size);
void rotate_90(int array[N][N], int *P_matriz);
int len_numero(int num);

int main()
{
    int matrix[N][N]={}, integers=1;

    // Se imprime en panatalla la funcion del programa
    cout << "Este programa llena una matriz 5x5 con numeros del 1 al 25 y se imprime en pantalla "
            "la matriz rotada 90, 180 y 270 grados respectivamente.\n" << endl;

    // Se llena la matriz con numeros del 1 al 25
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            matrix[i][j]=integers;
            integers++;
        }
    }

    // Se imprime la matriz original
    cout << "Matriz original: ";
    printMatrix(matrix, N);

    // Se impime la matriz rotada 90°, 180° y 270°
    for(int i=90; i<=270; i+=90){
        rotate_90(matrix, matrix[0]);
        cout << "Matriz rotada " << i << " grados: ";
        printMatrix(matrix,N);
    }

    return 0;
}

void rotate_90(int array[N][N], int *P_matriz){
    int arrayaux[N][N]={};

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            arrayaux[i][j]=array[i][j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=N-1; j>=0; j--){
            *P_matriz=arrayaux[j][i];
            P_matriz++;
        }
    }
}

void printMatrix(int array[N][N], int size){
    int numsLarge[100]={}, lines=(size*3)+1, spaces;

    for(int i=0; i<size; i++){
        for(int h=0; h<size; h++){
            if(len_numero(array[h][i])>numsLarge[i]){
                numsLarge[i]=len_numero(array[h][i]);
            }
        }
    }

    for(int h=0; h<size; h++){
        lines+=numsLarge[h];
    }

    cout << "\n ";
    for(int h=0; h<lines; h++){
        cout << "-";
    }
    for(int i=0; i<size; i++){
        cout << endl;
        cout << " | ";
        for(int h=0; h<size; h++){
            spaces=len_numero(array[i][h]);
            cout << array[i][h];
            while(spaces<numsLarge[h]){
                cout << " ";
                spaces++;
            }
            cout << " | ";
        }
        cout << "\n ";
        for(int h=0; h<lines; h++){
            cout << "-";
        }
    }
    cout << endl;
}

int len_numero(int num){
    int cont=0;
    while(num!=0){
        num/=10;
        cont++;
    }
    return cont;
}
