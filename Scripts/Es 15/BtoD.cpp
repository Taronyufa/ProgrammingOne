// Scrivere un programma che dato in input un numero
// binario, stampi a video il suo corrispondente valore
// decimale.

using namespace std;
#include <iostream>
#include <cmath> 

int BtoD (int n);
int BtoDa(int n[], int len);
int power(int base, int exp);

int main(){

    int n;
    int array[] = {1, 1, 1};

    cout << "inserisci n: ";
    cin >> n;

    cout << BtoD(n) << endl;
    cout << BtoDa(array, 3) << endl;

    return 0;
}

int BtoD (int n){
    
    int result = 0;

    for (int i = 0; n > 0; i ++){
        result += (n % 10) * power(2 , i);
        n /= 10;
    }
    

    return result; 
}

int BtoDa(int n[], int len){
    int res = 0;

    for(int i = 0; len > 0; len--, i++){
        res += n[len - 1] * power(2, i); 
    }

    return res;
}

int power(int base, int exp){
    int res = 1;
    
    for( int i = 0; i < exp; i++){
        res *= base;
    }

    return res;
}