// Dato in input un numero intero (compreso tra 0 e 1000),
// scrivere un programma che ritorni a video se il numero
// inserito è primo.

using namespace std;
#include <iostream>

bool isPrime(int n);

int main(){
    
    int n;

    cout << "inserisci n: ";
    cin >> n;

    cout << isPrime(n);

    return 0;
}

// 1 = prime | 0 = !prime
bool isPrime(int n){
    
    bool check = true;

    for (int i = 2; i < n && check == true; i++)
        if (n % i == 0)
            check = false;
    
    return check;

}