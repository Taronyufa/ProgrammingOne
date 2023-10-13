using namespace std;
#include <iostream>
#include <string.h>
#define EOS '\0'
#define DIM 50

bool isPrime(int n);
string PrimeFactorization(int n);
void itoascii(int n, char *s);
int strlength(char *s);
void toPrint ( string s);

int main(){

    int n;

    cout << "inserisci un numero: ";
    cin >> n;


    /* char factors[DIM];
    factors[0] = EOS;
    cout << strlength(factors); */

    string factors = PrimeFactorization(n);

    cout<<factors;

    //toPrint(factors);

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

    char factors[DIM];
    factors[0] = EOS;
    
    while (isPrime(n) == 1){
        for (int i = 2; i < n ; i++){
            if (n % i == 0){
                char dummy[DIM];
                itoascii(i, dummy); 
                for (int j = 0; j < strlength(dummy); j++){
                    factors[strlength(factors)] = dummy[j];
                }
                factors[strlength(factors)] = EOS;
                n /= i;
            }
        }
    }
    
    char dummy[DIM];
    itoascii(n, dummy); 
    for (int j = 0; j < strlength(dummy); j++){
        factors[strlength(factors)] = dummy[j];
    }
    factors[strlength(factors) - 1] = EOS;
    
    return factors;
} 

void itoascii(int num, char *ascii){
    
    int digits = 1, i = 0;
    
    // just put the sign of the number
    if(num < 0){
        ascii[i++] = '-';
        num = - num;
    }
    
    // find the number of digits
    int m = num;
    for(; m >= 10 ;digits *= 10){
        m /= 10;
    }

    // extract all the digits and put them in the list
    for(; digits > 0; num %= digits, digits /= 10){
        ascii[i++] = num / digits + '0';
    }
    
    // its just the end of the string
    ascii[i] = '|';
    ascii[i + 1] = EOS;
}

int strlength(char *s){
    
    int i = 0;
    
    while(s[i] != EOS)
        ++i;
    
    return i;
}

/* void toPrint ( char *s){
    int len = strlength(s);

    for( int i = 0; i < len; i++){
        cout << s[i];
    }
} */