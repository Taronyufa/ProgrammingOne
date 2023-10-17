// Scrivere un programma che calcoli la divisione di un intero
// tramite funzione ricorsiva.

using namespace std;
#include <iostream>

int recursiveDivision(int dividendo, int divisore);

int main(){

    int dividendo, divisore;

    cout << "inserisci il dividendo: ";
    cin >> dividendo;

    cout << "inserisci il divisore: ";
    cin >> divisore;

    cout << "il risultato e': " << recursiveDivision(dividendo, divisore);

    return 0;
}

int recursiveDivision(int dividendo, int divisore){
    if (dividendo < divisore){
        return 0;
    }else{
        return 1 + recursiveDivision(dividendo - divisore, divisore);
    }
}