// Dato in input un carattere, scrivere un programma che
// controlli con una funzione se il carattere fornito in input sia
// una lettera dell’alfabeto minuscola. In caso affermativo, il
// programma deve stampare a video il carattere in
// maiuscolo, usando una funzione per la conversione.
// La funzione di conversione non deve ritornare alcun
// valore.

using namespace std;
#include <iostream>

bool isMin(char letter);
void minToMaiusc(char &letter);

int main(){

    char letter;

    do {
        cout << "inserisci una lettera: ";
        cin >> letter;
    }while (!isMin(letter));
    
    minToMaiusc(letter);
    cout << letter;

    return 0;
}

bool isMin(char letter){
    return letter >= 'a' && letter <= 'z';
}

void minToMaiusc(char &letter){
    letter -= 32;
}
