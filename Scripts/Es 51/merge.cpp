// Scrivere un programma che, dati due array di dimensioni
// diverse, li ordini e ne faccia il merge in un terzo array di
// dimesioni pari alla somma delle dimensioni dei due array in
// input.

using namespace std;
#include <iostream>
#include <cstdlib>
#include <array>

int *bubbleSort(int *arr, int DIM);
void swap(int &x, int &y);
void *merge(int *arr, int arr1[], int arr2[], int len);

int main(){
    srand(time(NULL));

    int arr1[10];
    for (int i = 0; i < 10; i++){arr1[i] = rand() % 10 + 1;}
    for (int i = 0; i < 10; i++){cout << arr1[i] << "   ";}

    int arr2[7];
    for (int i = 0; i < 7; i++){arr2[i] = rand() % 10 + 1;}
    for (int i = 0; i < 7; i++){cout << arr2[i] << "   ";}

    int *arr = new int[17]; 
    for (int i = 0; i < 17; i++){arr[i] = 0;}
    
    merge(arr, arr1, arr2, 17);
    *arr = *bubbleSort(arr, 17);

    cout << endl;

    for (int i = 0; i < 17; i++){cout << arr[i] << "   ";}

    return 0;
}

int *bubbleSort(int * arr, int DIM){
    int controllo = 0;

    for (int i = DIM - 1; i > 0 && controllo < DIM; --i){
        controllo = 0;
        for (int j = 0; j < i; ++j){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
            }else
                ++controllo;
        }
    }

    return arr;
}

void *merge(int *arr, int arr1[], int arr2[], int len){
    for (int i = 0; i < 17; i++){arr[i] = 0;}

    int i = 0;

    for (int j = 0; j < 10; j++) {arr[i] = arr1[j]; i+=1;}
    for (int j = 0; j < 7; j++) {arr[i] = arr2[j]; i+=1;}
    
    return 0;
}

void swap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}