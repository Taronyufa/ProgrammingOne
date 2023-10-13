// Scrivere un programma che, dati in input due numeri,
// a e b, li salvi in due variabili distinte, max e min,
// in cui la prima conterrà il numero maggiore tra i due e la
// seconda il più piccolo.
// (senza utilizzare funzioni di libreria o istruzioni if-else o
// operatore ternario o cicli)

using namespace std;
#include <iostream>

int main(){
    int a, b, max, min;
    cout << "inserisci a: ";
    cin >> a;

    cout << "inserisci b: ";
    cin >> b;

    max = b ^ ((b ^ a) & -(b < a));
    min = a ^ ((b ^ a) & -(b < a));

    cout << "max: " << max << endl << "min: " << min;

    return 0;
}