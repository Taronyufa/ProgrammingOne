using namespace std;
#include <iostream>

bool isPrime(int n);
string PrimeFactorization(int n);
string toString(int n);

int main(){

    int n;
    cout << "inserisci un numero: ";
    cin >> n;
    
    return 0;
}

// 0 = prime, 1 = !prime
bool isPrime(int n){
    bool check = false;

    for (int i = 2; i < n && check == false; i++){
        check = ( n % i ) == 0;
    }

    return check;
}

string PrimeFactorization(int n){

    string factors = "";
    
    while (isPrime(n) == 1){
        for (int i = 2; i < n ; i++){
            if (n % i == 0){
                factors = factors + ", " + toString(n);
            }
        }
    }
    
    return factors;
} 

string toString(int n){
    return "";
}