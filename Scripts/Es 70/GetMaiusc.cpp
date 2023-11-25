// Scrivere la dichiarazione e definizione di una funzione ricorsiva estrai
// che, data una stringa lunga al massimo 80 caratteri senza spazi, estragga
// tutte le lettere maiuscole contenute e restituisca un’altra stringa contenente
// solo le lettere maiuscole.

using namespace std;
#include <iostream>
#include "Estrai.h"

int main(){

    char prova[80] = "AUFoaishdaHisfUFDHAaisf";
    char risultato[80] = "prova";
    
    estrai(prova, risultato, 0, 0);

    cout << risultato;

    return 0;
}