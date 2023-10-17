// Scrivere un programma che, preso in input un numero
// intero, controlli se il numero è un palindromo.
// Scrivere una funzione ricorsiva che faccia il controllo.

using namespace std;
#include <iostream>

bool getPalindrom(int n, int pal, int n1);

int main(){

    int n;
    cout << "inserisci n: ";
    cin >> n;

    cout << getPalindrom(n, 0, n);

    return 0;
}

// 1 = palindrom,  0 != palindrom
bool getPalindrom(int n, int pal, int n1){
    if (n < 9){
        return (pal + n) == n1;
    } else{
        return getPalindrom(n / 10, (pal + n % 10) * 10, n1);
    }
}