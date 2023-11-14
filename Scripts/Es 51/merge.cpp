// Scrivere un programma che, dati due array di dimensioni
// diverse, li ordini e ne faccia il merge in un terzo array di
// dimesioni pari alla somma delle dimensioni dei due array in
// input.

using namespace std;
#include <iostream>
#include <cstdlib>
#include <array>

void bubbleSort(int *arr, int DIM);
void swap(int &x, int &y);
int *merge(int *arr1, int *arr2, int dim1, int dim2);

int main(){
    srand(time(NULL));

    int *arr1 = new int[10];
    for (int i = 0; i < 10; i++){arr1[i] = rand() % 10 + 1;}
    bubbleSort(arr1, 10);
    for (int i = 0; i < 10; i++){cout << arr1[i] << "   ";}

    int *arr2 = new int[7];
    for (int i = 0; i < 7; i++){arr2[i] = rand() % 10 + 1;}
    bubbleSort(arr2, 7);
    for (int i = 0; i < 7; i++){cout << arr2[i] << "   ";}
    
    int *arr = merge(arr1, arr2, 10, 7);


    cout << endl;

    for (int i = 0; i < 17; i++){cout << arr[i] << "   ";}

    return 0;
}

void bubbleSort(int * arr, int DIM){
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
}

int *merge(int *arr1, int *arr2, int dim1, int dim2){
    int *arr = new int[dim1 + dim2];

    int i = 0, j = 0, k = 0;

    while(i < dim1 && j < dim2){
        if (arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            ++k;
            ++i;
        }else{
            arr[k] = arr2[j];
            ++k;
            ++j;
        }
    }

    if (i == dim1){
        for(; j < dim2; j++, k++)
            arr[k] = arr2[j];
    }else{
        for(; i < dim1; i++, k++)
            arr[k] = arr1[i];
    }

    return arr;
}

void swap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}