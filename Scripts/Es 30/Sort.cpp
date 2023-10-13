// Dati in input tre interi positivi in tre variabili (n1, n2, n3),
// scrivere un programma che con una procedura “ri-ordini” i
// numeri in ordine crescente usando il passaggio di
// parametri per riferimento.

using namespace std;
#include <iostream>
#include <cmath>

void Sort(int &n1, int &n2, int &n3);

int main(){

    int n1, n2, n3;
    cout << "inserisci n1: ";
    cin >> n1;

    cout << "inserisci n2: ";
    cin >> n2;

    cout << "inserisci n3: ";
    cin >> n3;

    Sort (n1, n2, n3);

    cout << n1 << endl << n2 << endl << n3;
    return 0;
}

void Sort(int &n1, int &n2, int &n3){
    int Max, Min, Mid;
    Max = max(max(n1, n2), n3);
    Min = min(min(n1, n2), n3);
    n2 = (n1 + n2 + n3) - (Max + Min);
    n1 = Min;
    n3 = Max;
}