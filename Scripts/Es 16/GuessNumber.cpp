// Scrivere un programma che generi un numero compreso
// tra 1 e 10 utilizzando la funzione presentata sotto. Chiedere
// poi all’utente ripetutamente di inserire un numero e
// terminare il programma quando si sarà indovinato.

using namespace std;
#include <iostream>
#include <cstdlib>

int main(){

    srand(time(NULL));
    int random_number = rand() % 10 + 1;
    bool guess = false;
    int n;

    while (!guess){
        cout << "inserisci n: ";
        cin >> n;
        if (n == random_number)
            guess = true;
        else
            cout << "ritenta e sarai piu' fortunato" << endl;
    }

    return 0;
}