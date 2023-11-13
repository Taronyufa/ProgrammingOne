// Scrivere un programma che, dato un array di 10 interi (da 0 a
// 9) ordinato, chieda in input all’utente un intero da 0 a 9 ed
// implementi la ricerca binaria tramite funzione ricorsiva per
// trovare la posizione (indice) della prima occorrenza del
// numero in input.

using namespace std;
#include <iostream>
#include <cstdlib>

int *bubbleSort(int * arr);
int ricercaBinaria(int * v, int j, int x, int i = 0);
void swap(int &x, int &y);

int main(){
    srand(time(NULL));

    int *arr = new int[10];
    for (int i = 0; i < 10; i++){arr[i] = rand() % 10 + 1;}

    int n;
    cout << "inserisci n: ";
    cin >> n;

    *arr = *bubbleSort(arr);
    for (int i = 0; i < 10; i++) {cout << arr[i] << "   ";}
    cout << endl << ricercaBinaria(arr, 9, n);

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

int ricercaBinaria(int *v, int j, int x, int i){
    if(i > j)
        return false;
    else{
        int m = (i+j) / 2;
        if(x == v[m])
            return m;
        else if(x < v[m])
            return ricercaBinaria(v, m-1, x, i);
        else 
            return ricercaBinaria(v, j, x, m+1);
    }
}

void swap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}