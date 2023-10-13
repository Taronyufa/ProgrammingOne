// Scrivere un programma che simuli un attacco 3 contro 3 a RisiKo!. Tirare 3
// dadi a 6 facce per l’attaccante e 3 per il difensore. Confrontare il dado più alto
// dell’attaccante contro il più alto del difensore, il medio dell’attaccante contro il
// medio del difensore e il più basso dell’attaccante contro il più basso del
// difensore. Dichiarare infine gli scontri vinti dall’attaccante e dal difensore.

using namespace std;
#include <iostream>
#include <cmath>
#include <cstdlib>

void Sort(int &n1, int &n2, int &n3);
int getRandom();

int main(){

    srand(time(NULL));

    int a1 = getRandom(), a2 = getRandom(), a3 = getRandom(), d1 = getRandom(), d2 = getRandom(), d3 = getRandom();

    Sort(a1, a2, a3);
    Sort(d1, d2, d3);

    string winnermax = (max(a3, d3) == d3) ? "MaxDif" : "MaxAtt";
    string winnermin = (max(a1, d1) == d1) ? "MinDif" : "MinAtt";
    string winnermid = (max(a2, d2) == d2) ? "MinDif" : "MinAtt";

    cout << winnermax << endl << winnermid << endl << winnermin;

    return 0;
}

void Sort(int &n1, int &n2, int &n3){
    int Max, Min, Mid;
    Max = max(max(n1, n2), n3);
    Min = min(min(n1, n2), n3);
    n2 = (n1 + n2 + n3) - (Max + Min);
    n1 = Min;
    n3 = Max;
}

int getRandom(){
    int n = rand() % 6 + 1;
    return n;
}