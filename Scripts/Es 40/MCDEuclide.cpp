// Scrivere un programma che prenda in input due interi e
// calcoli il Massimo Comune Divisore (MCD) tramite funzione
// ricorsiva usando l’algoritmo di Euclide.

using namespace std;
#include <iostream>

int MCDEuclide(int a, int b);

int main(){

    int a, b;

    cout << "inserisci a: ";
    cin >> a;

    cout << "inserisci b: ";
    cin >> b;

    cout << MCDEuclide(a, b);

    return 0;
}

int MCDEuclide(int a, int b){
    if (b == 0){
        return a;
    }else if (a % b == 0){
        return b;
    }if (a < b){
        return MCDEuclide(b, a);
    }else{
        return MCDEuclide(b, a % b);
    }

}