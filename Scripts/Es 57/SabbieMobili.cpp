// Rappresentiamo una palude con una matrice che contiene solo 0 e 1, in cui 1 rappresenta
// terraferma, mentre 0 rappresenta sabbie mobili in cui si sprofonda. Scrivere una programma
// che, data la mappa di una palude (ovvero una matrice di 0 e 1), cerca un percorso per
// attraversarla su terraferma e, se tale percorso esiste, lo visualizza tramite un array che
// contiene i passi fatti su terraferma e una matrice che codifica terraferma con ‘*’ e sabbie mobili
// con ‘-’.

using namespace std;
#include <iostream>
#include <cstdlib>

int main(){
    srand(time(NULL));

    int matrix [5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrix[i][j] = rand() % 2;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << matrix[i][j] << "   " ;
        }
        cout << endl;
    }

    return 0;
}