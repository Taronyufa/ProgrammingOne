// Scrivere un programma che, dati in input due numeri,
// a e b, calcoli il risultato, in valore assoluto,
// dell’operazione (a-b).
// (senza utilizzare funzioni di libreria o istruzioni if-else)


using namespace std;
#include <iostream>

int main(){
    int a, b, result;
    cout << "inserisci a: ";
    cin >> a;

    cout << "inserisci b: ";
    cin >> b;

    result = a - b;
    result *= (result > 0) - (result < 0);

    cout << result;

    return 0;
}