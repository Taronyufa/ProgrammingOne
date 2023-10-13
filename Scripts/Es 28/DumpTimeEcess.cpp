// Dati in input tre interi in tre variabili (secondi, minuti, ore), scrivere un
// programma che con una procedura converta un eventuale eccesso di
// secondi in minuti e un eventuale eccesso di minuti in ore. Usare a
// scelta passaggio di parametri per riferimento o puntatore.

using namespace std;
#include <iostream>

void timeDump ( int &secondi, int &minuti, int &ore);

int main(){

    int secondi, minuti, ore;
    cout << "inserisci secondi: ";
    cin >> secondi;

    cout << "inserisci minuti: ";
    cin >> minuti;

    cout << "inserisci ore: ";
    cin >> ore;

    timeDump(secondi, minuti, ore);

    cout << "secondi: " << secondi << endl << "minuti: " << minuti << endl << "ore: " << ore;

    return 0;
}

void timeDump ( int &secondi, int &minuti, int &ore){
    while (secondi >= 60){
        secondi -= 60;
        minuti ++;
    }

    while (minuti >= 60){
        minuti -= 60;
        ore ++;
    }
}