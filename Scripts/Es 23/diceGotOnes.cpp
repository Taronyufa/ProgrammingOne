// Scrivere un programma che lanci 10 dadi a 6 facce utilizzando la funzione
// presentata sotto. Chiedere poi all’utente di indovinare quanti dadi sono
// risultati essere 1.


using namespace std;
#include <iostream>
#include <cstdlib>

int getDices();

int main(){

    int n;

    do{
        cout << "inserisci n: ";
        cin >> n;

    }while(n == getDices());

    return 0;
}

int getDices(){

    int ones = 0;
    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        int random_number = rand() % 6 + 1;
        if (random_number == 1)
            ones++;
    }

    return ones;
}