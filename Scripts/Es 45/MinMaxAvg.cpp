// Scrivere un programma che dichiari e poi inizializzi (con
// valori random) un array di 10 numeri interi, lo stampi a
// video, e poi calcoli media dei valori degli elementi
// dell’array, il valore massimo e il valore minimo.

using namespace std;
#include <iostream>
#include <cstdlib>

void printArr(int arr[], int dim);
int Avg(int arr[], int dim);
int Min(int arr[], int dim);
int Max(int arr[], int dim);

int main(){
    
    srand(time(NULL));

    int arr[10];

    for (int i = 0; i < 10; i++){
        arr[i] = rand() % 10;
    }

    printArr(arr, 10);

    cout << endl << "Avg: " << Avg(arr, 10) << ", Min: " << Min(arr, 10) << ", Max: " << Max(arr, 10);

    return 0;
}

void printArr(int arr[], int dim){
    for(int i = 0; i < dim; i++){
        cout << arr[i] << " | ";
    }
}

int Avg(int arr[], int dim){
    int avg = 0;
    for (int i = 0; i < dim; i++){
        avg += arr[i];
    }
    return avg / dim;
}

int Min(int arr[], int dim){
    int min = arr[0];
    for(int i = 1; i < dim; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int Max(int arr[], int dim){
    int max = arr[0];
    for(int i = 1; i < dim; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}