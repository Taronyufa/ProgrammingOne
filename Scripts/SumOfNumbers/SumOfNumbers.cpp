// Dato un numero intero a stampare la somma delle sue cifre

using namespace std;
#include <iostream>

int sumOfNumbers(int n);

int main(){

    int n;
    cout << "inserisci n: ";
    cin >> n;

    cout << "the sum of the numbers is: " << sumOfNumbers(n);

    return 0;
}

// gives the sum of the digits of n
int sumOfNumbers(int n){

    int sum = 0;

    while (n > 9){
        sum += n % 10;
        n /= 10;
    }

    return sum + n;
}

