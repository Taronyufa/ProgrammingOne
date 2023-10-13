// Scrivere un programma che ritorni a video tutti i numeri
// interi primi compresi tra 1 e un limite superiore n. Il limite
// superiore n viene dato in input dall’utente.


using namespace std;
#include <iostream>

void primeNumbers(int n);
bool isPrime(int n);

int main(){
    
    int n;

    cout << "inserisci n: ";
    cin >> n;

    primeNumbers(n);

    return 0;
}

void primeNumbers(int n){
    for( int i = 1; i <= n; i++)
        if (isPrime(i))
            cout << i << endl;
    
}

// 1 = prime | 0 = !prime
bool isPrime(int n){
    
    bool check = true;

    for (int i = 2; i < n && check == true; i++)
        if (n % i == 0)
            check = false;
    
    return check;

}