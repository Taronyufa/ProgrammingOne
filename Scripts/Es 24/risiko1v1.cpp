// Scrivere un programma che simuli un attacco 1 contro 1 a RisiKo!. Tirare 1
// dado a 6 facce per l’attaccante e 1 dado per il difensore. Dichiarare infine il
// numero più alto come il vincitore.

using namespace std;
#include <iostream>
#include <cstdlib>
#include <cmath>

int main(){

    srand(time(NULL));
    
    int defender = rand() % 6 + 1;
    int attacker = rand() % 6 + 1;

    string winner = (max(defender, attacker) == attacker) ? "attacker" : "defender";
    cout << "the winner is: " << winner;

    return 0;
}