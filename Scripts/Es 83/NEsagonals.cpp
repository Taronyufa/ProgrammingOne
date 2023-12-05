// Scrivere un programma che, dato un intero positivo N, crei
// dinamicamente e stampi un array contenente i primi N numeri
// esagonali, partendo da 0.
// Nota: non si possono usare cicli

using namespace std;
#include <iostream>

void nEsagonals(int dim, int *array, int i = 0);

int main(){

    int dim;
    cout << "Inserisci n: ";
    cin >> dim;

    int *array = new int[dim];

    nEsagonals(dim, array);

    for(int i = 0; i < dim; i++){
        cout << array[i] << "   ";
    }

    return 0;
}

void nEsagonals(int dim, int *array, int i){
    if(i < dim){
        array[i] = i * (2 * i - 1);
        nEsagonals(dim, array, i + 1);
    }
}