// Scrivere un programma che prenda in input due caratteri e
// stampi a video tutti i caratteri compresi tramite procedura
// ricorsiva.

using namespace std;
#include <iostream>

void recursiveCharPrint(char a, char b);

int main(){

    char a, b;

    cout << "inerisci a: ";
    cin >> a;

    cout << "inserisci n: ";
    cin >> b;

    recursiveCharPrint(a, b);

    return 0;
}

void recursiveCharPrint(char a, char b){
    if (a == b){
        cout << a;
    }else {
        cout << a;
        recursiveCharPrint(char(int(a + 1)), b);
    }
}
