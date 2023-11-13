// Scrivere un programma che dichiari e poi inizializzi un array di 10 interi con valori
// randomici da 0 a 99 inclusi e lo stampi a video. Ordinare poi l’array implementando
// l’algoritmo Bubble Sort avendo cura di eliminare iterazioni inutili qualora l’array risulti
// ordinato. Si stampi a video, inoltre, il numero di iterazioni necessarie a ordinare l’array. 
// Se ne implementi in seguito la versione ricorsiva, stampando a video il numero di passi
// di ricorsione effettuati.

using namespace std;
#include <iostream>
#include <cstdlib>

void swap(int &x, int &y);
int *bubbleSort(int * arr);
int *bubbleSortRec1(int *arr, int dim, int controllo = 0, int j = 0);
int *bubbleSortRec2(int *arr, int i, int controllo = 0, int j = 0);

int main(){
    srand(time(NULL));

    int *arr = new int[10];

    for (int i = 0; i < 10; i++){arr[i] = rand() % 99 + 1;}

    *arr = *bubbleSortRec1(arr, 9);
    *arr = *bubbleSort(arr);

    for (int i = 0; i < 10; i++){cout << arr[i] << "   ";}

    return 0;
}

int *bubbleSort(int * arr){
    int controllo = 0;

    for (int i = 10 - 1; i > 0 && controllo < 10; --i){
        controllo = 0;

        for (int j = 0; j < i; ++j){

            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
            } 

            else
                ++controllo;
        }
    }

    return arr;
}

int *bubbleSortRec1(int *arr, int dim, int controllo, int j){
    if (dim <= 0 || controllo >= 10){
        return arr;
    }else{
        return bubbleSortRec2(arr, dim, 0);
    }

}

int *bubbleSortRec2(int *arr, int i, int controllo, int j){
    if (j >= i){
        return bubbleSortRec1(arr, i - 1, controllo);
    }else if (arr[j] <= arr[j+1]){
        return bubbleSortRec2(arr, i, controllo + 1, j + 1);
    }else{
        swap(arr[j], arr[j + 1]);
        return bubbleSortRec2(arr, i, controllo + 1, j + 1);
    }
}

void swap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}