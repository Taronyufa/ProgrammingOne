// Dati in input due interi (short), scrivere un programma che
// con una procedura scambi gli 8 bit meno significativi dei
// due numeri.

using namespace std;
#include <iostream>

void getlast(short &n);
void getfirst(short &n);
void Xor (short &n1, short n2);

int main(){

    short n1, n2;
    cout<<"Numero 1 : ";
    cin>>n1;

    cout<<"Numero 2 : ";
    cin>>n2;
    
    short n3 = n1, n4 = n2;

    getlast(n1);
    getlast(n2);

    getfirst(n3);
    getfirst(n4);

    Xor(n1, n4);
    Xor(n2, n3);
    
    cout<<n1<<"  "<<n2<<endl;

    return 0;
}

// it returns just the 8 least significants bits
void getlast(short &n){
    n <<= 8; 
    n >>= 8;
}

// it returns just the 8 most significants bits
void getfirst(short &n){
    n >>= 8;
    n <<= 8;
}

// it makes the xor between two numbers and save it in the first one
void Xor (short &n1, short n2){
    n1^=n2;
}