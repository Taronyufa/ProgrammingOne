// - Scrivere un programma che, ricevuto in input dall’utente un valore di distanza in miglia, ritorni lo stesso
// valore convertito in chilometri.
// - Scrivere un programma che, data in input la lunghezza di una lato L, calcoli l’area e il perimetro di
// un esagono.
// - Scrivere un programma che determini se il computer che state utilizzando lavora in Big Endian o Little Endian.

using namespace std;
#include <iostream>
#include <cmath>

const float KM = 0.62137;
const float SQRT3 = sqrt(3);

int main(){

    // Exercise 1
    float miglia; 
    cout << "Inserisci miglia: ";
    cin >> miglia;
    cout << "Chilometri: " << miglia / KM << endl;

    // Exercise 2
    float lato;
    cout << "Inserisci lato: ";
    cin >> lato;
    cout << "Perimetro: " << lato * 6 << endl << "Area: " << (lato * lato) / 2 * 3 * SQRT3 << endl;

    // Exercise 3
    int i = 1;
    char *c = (char*)&i;
    if (*c)   
        cout << "Little endian";
    else
        cout << "Big endian";
    
    return 0;
}