// Scrivere un programma che dichiari e poi inizializzi un
// array di 10 numeri interi i cui elementi abbiano valori
// randomici compresi tra 0 e 9 inclusi, e poi stampi a video
// tutti gli elementi dell’array.


using namespace std;
#include <iostream>
#include <cstdlib>

void printArr(int arr[], int dim);

int main(){
    
    srand(time(NULL));

    int arr[10];

    for (int i = 0; i < 10; i++){
        arr[i] = rand() % 10;
    }

    printArr(arr, 10);

    return 0;
}

void printArr(int arr[], int dim){
    for(int i = 0; i < dim; i++){
        cout << arr[i] << " | ";
    }
}