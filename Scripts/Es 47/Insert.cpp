// Scrivere un programma che dichiari e poi inizializzi (con
// valori random) un array di 10 numeri interi e poi prenda in
// input un nuovo elemento x e un indice i, e aggiunga
// l'elemento x in posizione i nell’array, traslando gli elementi
// successivi. Si controlli che l’indice i inserito sia nel range
// opportuno, se non lo fosse visualizzare un messaggio di
// errore e richiedere un nuovo inserimento.

using namespace std;
#include <iostream>
#include <cstdlib>

void printArr(int arr[], int dim);
void insert(int arr[], int dim);
void swap(int &x, int &y);

int main(){
    
    srand(time(NULL));

    int arr[10];

    for (int i = 0; i < 10; i++){
        arr[i] = rand() % 10;
    }

    printArr(arr, 10);
    cout << endl;
    insert(arr, 10);

    return 0;
}

void printArr(int arr[], int dim){
    for(int i = 0; i < dim; i++){
        cout << arr[i] << " | ";
    }
}

void insert(int arr[], int dim){
    
    int n, i;

    cout << "inserisci n: ";
    cin >> n;

    do{
        cout << "inserisci l'indice: ";
        cin >> i;
    }while(i > dim && i <= 0);

    for (; i < dim; i++){
        swap(arr[i], n);
    }

    printArr(arr, dim);

}

void swap(int &x, int &y){
    x = x + y; 
    y = x - y; 
    x = x - y;
}