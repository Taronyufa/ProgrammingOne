// Scrivere un programma che, dato in input un numero
// dall’utente, ritorni a video se questo numero possa essere
// espresso come la somma di due numeri primi.
// Stampare anche i corrispondenti numeri primi a video.

using namespace std;
#include <iostream>

void getSumOfPrime(int n);
bool isPrime(int n);

int main(){

    int n;
    cout << "inserisci n: ";
    cin >> n;

    getSumOfPrime(n);

    return 0;
}

void getSumOfPrime(int n){

    for ( int i = 1; i < (n / 2) + 1; i++){
        if (isPrime(i) == 1)
            if (isPrime(n-i) == 1)
                cout << i << "+" << n-i << endl;
    }

}

// 1 = prime | 0 = !prime
bool isPrime(int n){
    
    bool check = true;

    for (int i = 2; i < n && check == true; i++)
        if (n % i == 0)
            check = false;
    
    return check;

}