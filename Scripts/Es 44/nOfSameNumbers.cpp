// Scrivere un programma che dichiari e poi inizializzi (con
// valori random, il cui massimo sia inserito dall’utente) due
// array di 10 numeri interi, li stampi a video, e poi conti
// quanti interi uguali sono allo stesso indice nei due array

using namespace std;
#include <iostream>
#include <cstdlib>

void printArr(int arr[], int dim);
int nSameValue(int arr1[], int arr2[], int dim);

int main(){

    srand(time(NULL));

    int max, arr1[10], arr2[10];

    cout << "inserisci il valore massimo: ";
    cin >> max;

    for (int i = 0; i < 10; i++){
        arr1[i] = rand() % max;
        arr2[i] = rand() % max;
    }

    printArr(arr1, 10);
    cout << endl;
    printArr(arr2, 10);

    cout << endl << nSameValue(arr1, arr2, 10);

    return 0;
}

void printArr(int arr[], int dim){
    for(int i = 0; i < dim; i++){
        cout << arr[i] << " | ";
    }
}

int nSameValue(int arr1[], int arr2[], int dim){
    int count = 0;
    for (int i = 0; i < dim; i++){
        if (arr1[i] == arr2[i]){
            count ++;
        }
    }
    return count;
}