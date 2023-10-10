// Dato in input un carattere, scrivere un programma che
// ontrolli con una funzione se il carattere fornito in input sia
// una lettera dell’alfabeto minuscola. In caso affermativo, il
// programma deve stampare a video il carattere in
// maiuscolo, usando una funzione per la conversione.

using namespace std;
#include <iostream>

bool isMin(char letter);
char minToMaiusc(char letter);

int main(){

    char letter;
    
    do{
        cout << "inserisci una lettera: ";
        cin >> letter;
    }while(isMin(letter));
    
    cout << minToMaiusc(letter);

    return 0;
}

bool isMin(char letter){
    return letter >= 'a' && letter <= 'z';
}

char minToMaiusc(char letter){
    return letter - 32;
}
