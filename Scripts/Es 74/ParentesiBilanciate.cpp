// Partendo dall’implementazione di una Pila tramite liste concatenate
// scrivere un programma che legge una sequenza di caratteri in input
// dall’utente e determina se le parentesi sono “bilanciate”:

using namespace std;
#include <iostream>
#include "pila.h"


int main(){

    string parentesi;

    cout << "inserisci parentesi: ";
    cin >> parentesi;

    pila_init();

    bool check = true;
    for(int i = 0; parentesi [i] != '\0' && check; i++){

        if (parentesi[i] == '('){
            pila_push(int('('));
        }else if(parentesi[i] == ')'){
            
            if(pila_vuota()){
                check = false;
            }else{
                pila_pop();
            }
        }
    }

    if(!pila_vuota()){
        check = false;
    }

    cout << check;

    return 0;
}


