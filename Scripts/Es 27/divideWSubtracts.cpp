// Dati in input due interi, scrivere un programma che faccia la divisione
// tramite una funzione; la funzione restituisce tramite valore di ritorno il
// quoziente e tramite parametro per riferimento il resto.
// In questo programma non si può usare il simbolo ‘/’ per la divisione

using namespace std;
#include <iostream>

int divide(int dividendo, int divisore, int &resto);

int main(){

    int divisore, dividendo, resto = 0;

    cout << "inserisci il dividendo: ";
    cin >> dividendo;

    cout << "inserisci il divisore: ";
    cin >> divisore;

    int quoziente = divide(dividendo, divisore, resto);

    cout << quoziente << " & " << resto;

    return 0;
}

int divide(int dividendo, int divisore, int &resto){
    int i;
    for(i = 0; dividendo >= divisore; i++){
        dividendo -= divisore;
    }

    resto = dividendo;

    return i;
}