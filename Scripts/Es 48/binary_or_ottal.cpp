// Scrivere un programma che, chiesto in input all’utente un
// numero intero e una base che può assumere valore 2 oppure 8,
// stampi a video il numero e lo converta nella notazione binaria o
// ottale corrispondente ad 8 cifre. Nel caso il numero sia negativo
// o troppo grande per essere rappresentato a 8 cifre, il
// programma darà un messaggio di errore e chiederà all’utente di
// inserire un nuovo numero. Il programma stampi a video la
// codifica binaria o ottale del numero.

using namespace std;
#include <iostream>

int *converter(int n, int base, int *conv);

int main(){

    int n, base;

    do{
        cout << "inserisci la base: ";
        cin >> base;

        cout << "inserisci n: ";
        cin >> n;
    }while((base == 8 && (n > 16777215 || n < 0)) || (base == 2 && (n > 255 || n < 0)));

    int *conv = new int[8];

    // inizialize the vector to only 0
    for(int i = 0; i < 8; i++) {conv[i] = 0;}

    *conv = *converter(n, base, conv);

    // just print the whole array
    for (int i = 0; i < 8; i++){cout << conv[i];}

    return 0;
}

// it converts the number in the given base only if its conversion is 8 digits or less
int *converter(int n, int base, int *conv){
    for(int i = 7; n != 0; i--){
        conv[i] = n % base;
        n /= base; 
    }
    return conv;
}