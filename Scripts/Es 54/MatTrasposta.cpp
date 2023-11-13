// Scrivere un programma che dichiari e poi inizializzi (con valori
// random) una matrice di interi, la stampi a video, calcoli la
// matrice trasposta e la stampi a video.

using namespace std;
#include <iostream>
#include <cstdlib>

void swap(int &x, int &y);

int main(){
    srand(time(NULL));

    int matrix [5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrix[i][j] = rand() % 10;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << matrix[i][j] << "   " ;
        }
        cout << endl;
    }

    int matrix2 [5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrix2[i][j] = matrix[j][i];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << matrix2[i][j] << "   " ;
        }
        cout << endl;
    }

    return 0;
}

void swap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}