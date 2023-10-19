// Scrivere una funzione che, dato in input due interi, base ed
// esponente, calcoli la potenza in modo ricorsivo. 

using namespace std;
#include <iostream>

int recursivepwr(int base, int exponent);

int main(){

    int base, exponent;

    cout << "inserisci la base: ";
    cin >> base;

    cout << "inserisci l'eponente: ";
    cin >> exponent;

    cout << recursivepwr(base, exponent);

    return 0;
}

int recursivepwr(int base, int exponent){
    if (exponent == 0){
        return 1;
    }else{
        return recursivepwr(base, exponent - 1) * base;
    }
}