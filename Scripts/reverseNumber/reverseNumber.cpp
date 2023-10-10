// Scrivere un programma che prenda in input un numero e
// stampi a video il numero invertito usando una procedura.

using namespace std;
#include <iostream>

int reverse(int n);

int main(){

    int n;
    cout << "inserisci n: ";
    cin >> n;

    cout << reverse(n);

    return 0;
}

int reverse(int n){

    int digits = 1;
    int reverted = 0;

    int m = n;
    for(; m >= 10 ;digits *= 10){
        m /= 10;
    }

    for(; n >= 10; digits /= 10, n /= 10){
        reverted += (n % 10) * digits;
    }

    return reverted + n;
}