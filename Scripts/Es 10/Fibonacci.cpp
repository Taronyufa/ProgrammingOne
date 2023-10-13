// Scrivere un programma che, dato in input un valore intero
// n, stampi a video la successione di fibonacci fino
// all’n-esima cifra.

using namespace std;
#include <iostream>

void fibonacci(int n);

int main(){

    int n;
    cout << "inserisci n: ";
    cin >> n;

    fibonacci(n);

    return 0;
}

void fibonacci(int n){
    
    int f1 = 0;
    int f2 = 1;

    cout << f1 << endl << f2 << endl;

    while (n >= (f2 + f1)){
        int dummy = f2;
        f2 += f1;
        f1 = dummy;
        cout << f2 << endl;
    }
    
}