// Scrivere un programma che dichiari e poi inizializzi (con valori
// random) una matrice di interi e poi stampi a video tutti gli
// elementi della matrice.

using namespace std;
#include <iostream>
#include <cstdlib>

int main(){
    srand(time(NULL));

    int matrix [5][6];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            matrix[i][j] = rand() % 10;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            cout << matrix[i][j] << "   " ;
        }
        cout << endl;
    }

    return 0;
}