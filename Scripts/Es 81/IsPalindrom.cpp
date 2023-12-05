// Scrivere un programma che verifichi in modo ricorsivo se una sequenza
// di numeri contenuta in un array di al più 100 interi è palindroma.

using namespace std;
#include <iostream>

bool isPalindrom(int dim, int *array, int i = 0);

int main(){

    int dim;
    do{
        cout << "Inserire lunghezza array: ";
        cin >> dim;
    }while(dim > 100);
    

    int *array = new int [dim];

    for(int i = 0; i < dim; i ++){
        cout << endl << "Inserisci " << i << "esimo numero: ";
        cin >> array [i];
    }

    cout << isPalindrom(dim, array);

    return 0;
}

bool isPalindrom(int dim, int *array, int i){
    if(i > (dim / 2)){
        return true;
    }else{
        return array[i] == array[(dim - 1) - i] && isPalindrom(dim, array, i + 1);
    }
}