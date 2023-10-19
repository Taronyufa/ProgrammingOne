// Scrivere una procedura che fattorizzi in primi un dato
// numero intero tramite ricorsione. E’ possibile definire delle
// funzioni ausiliarie (e.g., una funzione che computi se un
// numero è primo). Se possibile, le funzioni ausiliarie devono
// essere ricorsive loro stesse.

using namespace std;
#include <iostream>

bool isNotPrime(int n, int i = 2);
void primeFactorization(int n, int i = 2);

int main(){

    int n;
    cout << "inserisci n: ";
    cin >> n;

    cout << isNotPrime(5);

    //primeFactorization(n);

    return 0;
}

void primeFactorization(int n, int i){
    if (n != 1){
        if (n % i == 0 && !isNotPrime(i)){
            cout << i << endl;
            primeFactorization(n / i, i);
        }else{
            primeFactorization(n, i + 1);
        }
    }
}

// 0 == isPrime, 1 != isPrime
bool isNotPrime(int n, int i){
    if (i == n){
        return false;
    }else{
        return (n % i) == 0 || isNotPrime(n, i + 1);
    }
}
