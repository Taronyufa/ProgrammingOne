// Scrivere un programma che simuli l'arrivo e lo smaltimento di una coda
// all'ufficio postale. Gli elementi della coda sono i nomi delle persone. Il
// main sarà un menù con tre opzioni: (1) aggiungi persona, (2) smaltisci
// persona, (3) stampa situazione corrente.
// Non sono ammessi omonimi nella coda.

using namespace std;
#include <iostream>
#include "coda.h"

int main(){

    int option;
    char nome[50];
    init();

    while(true){
        cout << endl << "Inserisci opzione: ";
        cin >> option;
        switch (option){
            case 1:
                cout << endl << "Inserisci il nome: " ;
                cin >> nome;
                enqueue(nome);
                break;

            case 2:
                if (!vuota()){
                    dequeue();
                }else{
                    cout << endl << "Errore: coda vuota";
                }
                break;
            
            case 3:
                print();
                break;
                
            default:
                cout << endl << "Not an option";
        }
    }

return 0;
}

