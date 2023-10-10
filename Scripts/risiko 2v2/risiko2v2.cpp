// Scrivere un programma che simuli un attacco 2 contro 2 a RisiKo!. Tirare 2
// dadi a 6 facce per l’attaccante e 2 dadi per il difensore. Confrontare il dado
// più alto dell’attaccante contro il più alto del difensore, e il più basso
// dell’attaccante contro il più basso del difensore. Dichiarare infine gli
// scontri vinti dall’attaccante e quelli vinti dal difensore.

using namespace std;
#include <iostream>
#include <cstdlib>
#include <cmath>

int main(){

    srand(time(NULL));

    int defender1 = rand() % 6 + 1;
    int defender2 = rand() % 6 + 1;
    int attacker1 = rand() % 6 + 1;
    int attacker2 = rand() % 6 + 1;

    int maxdef = max(defender1, defender2);
    int mindef = min(defender1, defender2);
    int maxatt = max(attacker1, attacker2);
    int minatt = min(attacker1, attacker2);

    string winnermax = (max(maxdef, maxatt) == maxatt) ? "maxattacker" : "maxdefender";
    string winnermin = (max(mindef, minatt) == minatt) ? "minattacker" : "mindefender";

    cout << "the winner of the maxs is: " << winnermax << endl << "the winner of the mins is: " << winnermin;

    return 0;
}