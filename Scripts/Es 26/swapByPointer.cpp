// Dati in input due reali (double) in due variabili, scrivere un
// programma che usi una procedura per biare i valori
// delle due variabili usando il passaggio di parametri per
// puntatore.

using namespace std;
#include <iostream>

void swap (double *pt1, double *pt2 );

int main(){

    double n1, n2;

    cout << "inserisci n1: ";
    cin >> n1;

    cout << "inserisci n2: ";
    cin >> n2;

    swap(n1, n2);
    
    cout << "n1: " << n1 << endl << "n2: " << n2;

    return 0;
}

void swap (double *pt1, double *pt2 ){
    double *supp = pt1;
    *pt1 = *pt2;
    *pt2 = *pt1;
}