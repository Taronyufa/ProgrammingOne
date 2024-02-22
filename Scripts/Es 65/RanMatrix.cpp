// Scrivere un programma che, dati in input dall’utente da riga di
// comando due numeri interi R e C, crei dinamicamente una
// matrice con R righe ed C colonne. Popolate poi questa matrice
// con dei numeri random.
// Infine, stampate questa matrice a video. 

using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int **generate_matrix(int row, int column);
void deleteMatrix(int **matrix, int row);

int main(int argc, char * argv []){
    srand(time(NULL));

    if (argc != 3){
        cout << "Usage: ./RanMatrix.exe <row> <column>";
        exit(0);
    }

    int row = atoi(argv[1]);
    int column = atoi(argv[2]);

    int **mat = generate_matrix(row, column);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    deleteMatrix(mat, row);

    return 0;
}

int **generate_matrix(int row, int column){
    int **mat = new int *[row];

    for(int i = 0; i < row; i++){
        mat[i] = new int[column];
        for(int j = 0; j < column; j++){
            mat[i][j] = rand() % 10 + 1;
        }
    }

    return mat;
}

void deleteMatrix(int **matrix, int row){

    for(int i = 0; i < row; i++){
        delete[] matrix[row];
    }
    
    delete[] matrix;
}