// Una tecnica che spesso si applica ai dati contenuti in una matrice consiste nel sostituire a
// ciascun elemento della matrice la media degli elementi che lo circondano. Tale tecnica è detta
// filtro medio. In un filtro medio, ciascun elemento della matrice è sostituito dalla media dei
// quattro elementi che si trovano sopra, sotto, a destra e a sinistra dell’elemento specificato.

using namespace std;
#include <iostream>
#include <cstdlib>

void filtroMedio(int matrix1[][10], int matrix2[][10]);

int main(){
    srand(time(NULL));

    int matrix1[10][10]; 
    int matrix2[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            matrix1[i][j] = rand() % 10;
        }
    }

    filtroMedio(matrix1, matrix2);

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << matrix1[i][j] << "   " ;
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << matrix2[i][j] << "   " ;
        }
        cout << endl;
    }

    return 0;
}

void filtroMedio(int matrix1[][10], int matrix2[][10]){
    int sum = 0, div = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            sum = 0, div = 0;
            if(i > 0){
                sum += matrix1[i-1][j];
                div++;
            }
            if(j > 0){
                sum += matrix1[i][j-1];
                div++;
            }
            if (i < 9){
                sum += matrix1[i+1][j];
                div++;
            }
            if (j < 9){
                sum += matrix1[i][j+1];
                div++;
            }
            matrix2[i][j] = sum / div;
        }
    }
}
