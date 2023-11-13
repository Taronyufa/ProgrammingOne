// Scrivere un programma che dichiari e poi inizializzi (con valori
// random) una matrice quadrata di interi, la stampi a video,
// calcoli la somma degli elementi nel triangolo superiore della
// matrice e la stampi a video.

using namespace std;
#include <iostream>
#include <cstdlib>

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

    int sum = 0;
    for(int i = 0; i < 5; i++){
        for(int j = i; j < 5; j++){
            sum += matrix[i][j];
        }
    }

    cout << sum;

    return 0;
}