// Scrivere un programma che, dato un array di 10 numeri interi (da
// 0 a 9), lo ordini e poi sostitusica eventuali numeri duplicati con il
// valore -1.

using namespace std;
#include <iostream>
#include <cstdlib>

void swap(int &x, int &y);
int *bubbleSort(int * arr);
int *removeDublicates(int *arr);

int main(){
    srand(time(NULL));

    int *arr = new int[10];

    for (int i = 0; i < 10; i++){arr[i] = rand() % 10;}

    *arr = *bubbleSort(arr);

    for (int i = 0; i < 10; i++){cout << arr[i] << "   ";}

    *arr = *removeDublicates(arr);

    cout << endl;

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
            }else
                ++controllo;
        }
    }

    return arr;
}

int *removeDublicates(int *arr){
    for(int i = 0; i < 10; i++){
        for (int j = i + 1; arr[i] == arr[j]; j++){
                arr[j] = -1;
        }
    }

    return arr;
}

void swap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}