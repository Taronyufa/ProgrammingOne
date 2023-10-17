// Scrivere un programma che prenda in input un numero e
// ne stampi a video la rappresentazione binaria tramite
// procedura ricorsiva.

using namespace std;
#include <iostream>

void recursiveDToB(int n);

int main(){

    int n;
    cout << "inserisci n: ";
    cin >> n;
    
    recursiveDToB(n);

    return 0;
}

void recursiveDToB(int n){
    if (n != 0) {
        recursiveDToB(n / 2);
        cout << n % 2;
    }
}