// Scrivere una funzione ricorsiva che, dato in input un
// numero intero, ritorni la somma delle cifre che
// compongono il numero intero.

using namespace std;
#include <iostream>

int recursiveDigitSum (int n);

int main(){

    int n;
    cout << "inserisci n: ";
    cin >> n;

    cout << recursiveDigitSum(n);

    return 0;
}

int recursiveDigitSum (int n){
    if (n < 9){
        return n;
    }else{
        return recursiveDigitSum(n / 10) + n % 10;  
    }  
}