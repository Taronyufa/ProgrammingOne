// Scrivere un programma che, dato in input dall’utente da riga di
// comando un numero intero N, ritorni a video una lista di N
// numeri interi generati randomicamente nell’intervallo 0-99.
// Questi numeri devono essere salvati in un array. Questo array
// deve essere generato dinamicamente da una funzione con la
// firma uguale a quella mostrata sopra.

using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int *generate_numbers(int n);

int main(int argc, char * argv []){
    srand(time(NULL));

    if (argc != 2){
        cout << "Usage: ./RanArray.exe <n>";
        exit(0);
    }

    int n = atoi(argv[1]);

    int *arr = generate_numbers(n);
    for (int i = 0; i < n; i++){cout << arr[i] << "   ";}

    return 0;
}

int *generate_numbers(int n){
    int *arr = new int[n];
    for(int i = 0; i < n; i++){arr[i] = rand() % 100;}

    return arr;
}