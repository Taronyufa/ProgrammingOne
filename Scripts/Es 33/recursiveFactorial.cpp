// Scrivere un programma che calcoli il fattoriale di un intero
// positivo tramite funzione ricorsiva.

using namespace std;
#include <iostream>

int recursiveFactorial(int n);

int main(){

    int n;
    cout << "inserisci n: ";
    cin >> n;

    cout << "il fattoriale e': " << recursiveFactorial(n);

    return 0;
}

int recursiveFactorial(int n){
    if ( n == 1 ){
        return 1;
    }else{
        return n * recursiveFactorial(n - 1);
    }
}