// Scrivere un programma che verifichi se un array di interi “pattern” è
// contenuto in un altro array di interi “testo”. Generare randomicamente i
// due array (è concesso l’uso della funzione rand() nella libreria
// <cstdlib>) con una dimensione fissata a priori (massimo 100).

using namespace std;
#include <iostream>
#include <cstdlib>


int main(int argc, char * argv []){
    srand(time(NULL));

    int pattern[3], testo[10];
    int dimp = 3, dimt = 10;

    for(int i = 0; i < dimp; i++){
        pattern[i] = rand() % 10;
        cout << pattern[i] << "   ";
    }

    cout << endl;

    for(int i = 0; i < dimt; i++){
        testo[i] = rand() % 10;
        cout << testo[i] << "   ";
    }

    cout << endl;

    bool check = false;
    for(int i = 0; i < dimt && !check; i++){
        if(testo[i] == pattern[0] && (i + dimp < dimt)){
            check = true;
            for(int j = 1; j < dimp && check; j++){
                check = testo[i + j] == pattern[j];
            }
        }
    }

    cout << check;

    return 0;
}