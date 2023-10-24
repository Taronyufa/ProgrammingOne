// Scrivere un programma che dichiari e poi inizializzi (con
// valori random) un array di 10 numeri interi, lo stampi a
// video, lo inverta e poi stampi l’array invertito.

using namespace std;
#include <iostream>
#include <cstdlib>

void printArr(int arr[], int dim);
void swapArray(int arr[], int dim);
void swap(int &x, int &y);

int main(){
    
    srand(time(NULL));

    int arr[10];

    for (int i = 0; i < 10; i++){
        arr[i] = rand() % 10;
    }

    printArr(arr, 10);

    cout << endl;

    swapArray(arr, 10);

    return 0;
}

void printArr(int arr[], int dim){
    for(int i = 0; i < dim; i++){
        cout << arr[i] << " | ";
    }
}

void swapArray(int arr[], int dim){

    for (int i = 0; i < dim / 2; i++){
        swap(arr[i], arr[(dim - i) - 1]);
    }

    printArr(arr, dim);
}

void swap(int &x, int &y){
    x = x + y; 
    y = x - y; 
    x = x - y;
}