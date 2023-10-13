// Scrivere un programma che dato in input un numero
// binario, stampi a video il suo corrispondente valore
// decimale.

using namespace std;
#include <iostream>
#include <cmath> 

int BtoD (int n);

int main(){

    int n;

    cout << "inserisci n: ";
    cin >> n;

    cout << BtoD(n);

    return 0;
}

int BtoD (int n){
    
    int result = 0;

    for (int i = 0; n > 0; i ++){
        result += (n % 10) * pow (2 , i);
        n /= 10;
    }
    

    return result; 
}