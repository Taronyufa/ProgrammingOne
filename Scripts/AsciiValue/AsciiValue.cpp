// Scrivere un programma che stampi a video il valore ASCII
// di tutte le lettere dell’alfabeto minuscole e maiuscole.

using namespace std;
#include <iostream>

int main(){
    
    int character = 'A';

    while ( character <= 'Z'){
        cout << char(character) << "=" << character << endl;
        int(character) += 1;
    }

    character = 'a';

    while ( character <= 'z'){
        cout << char(character) << "=" << character << endl;
        int(character) += 1;
    }

    return 0;
}
