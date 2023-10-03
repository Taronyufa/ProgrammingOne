// Scrivere un programma che calcoli il risultato della
// seguente serie che approssima il valore pi greco. Il limite
// superiore di questa serie (il valore N) viene dato dall’utente
// in input.

using namespace std;
#include <iostream>
#include <cmath>

float serie (int n);

int main(){

    int n;

    cout << "inserisci n: ";
    cin >> n;

    cout << serie(n); 

    return 0;
}

float serie (int n){

    float s = 0;

    for(int i = 1; i <= n; i++){
        s += 1 / (pow(i, 2));
    }

    return s;
}