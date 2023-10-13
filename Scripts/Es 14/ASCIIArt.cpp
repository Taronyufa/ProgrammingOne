// Scrivere un programma che disegni sul terminale un
// triangolo le cui righe devono essere composte da un
// numero dispari di asterischi. L’altezza di questo triangolo
// viene data in input dall’utente.

using namespace std;
#include <iostream>

void AsciiArt(int n);

int main(){

    int n;

    cout << "inserisci n: ";
    cin >> n;

    AsciiArt(n);

    return 0;
}

void AsciiArt(int n){

    int spazi = n;
    int ast = 1;

    for(int i = 1; i <= n; i ++){
        for ( int j = 0; j < spazi; j++)
            cout << " ";
        
        for (int j = 0; j < ast; j++)
            cout << "*";
        
        cout << endl;
        spazi --;
        ast += 2;
    }
}