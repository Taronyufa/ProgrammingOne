// Scrivere un programma che, data una parola in input (massimo 100
// caratteri), dica se è palindroma oppure no usando una pila e/o una coda.
// Nota: non potete sfruttare la conoscenza della lunghezza della parola
// (non potete nemmeno calcolarla)

using namespace std;
#include <iostream>
#include "pila.h"
#include "coda.h"

int main(){

    char stringa[100];
    pila_init();
    coda_init();

    cout << "Inserisci stringa: ";
    cin >> stringa;

    for(int i = 0; stringa[i] != '\0'; i++){
        pila_push(int(stringa[i]));
        coda_enqueue(int(stringa[i]));
    }

    bool check = true;
    int pilaTop, codaFirst;
    while(!pila_vuota() || !coda_vuota() && check){
        pila_top(pilaTop);
        coda_first(codaFirst);
        if(pilaTop != codaFirst){
            check = false;
        }
        pila_pop();
        coda_dequeue();
    }

    cout << check;

    return 0;
}