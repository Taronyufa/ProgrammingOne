// Scrivere un programma che, dato un file in input da linea di comando
// contenente diverse temperature. Il file è costituito da una sola colonna
// e le temperature sono rappresentate come numeri reali. Il programma
// salvi queste temperature in un array dinamico e stampi a video le
// prime N temperature più alte. Il valore N viene specificato dall’utente
// da linea di comando. Il programma accetta anche un intero M che
// indica quante temperature al massimo sono presenti nel file.

using namespace std;
#include <iostream>
#include <fstream>

void bubbleSort(double * arr, int dim);

int main(int argc, char * argv []){

    if (argc != 4){
        cout << "Usage: ./Temperature.exe <file_input> <m> <n>";
        exit(0);
    }

    int m = atoi(argv[2]);
    int n = atoi(argv[3]);

    fstream input;
    input.open(argv[1], ios::in);

    if(input.fail()){
        cout << "Error: file does not exist";
        exit(0);
    }

    double *arr = new double[m];

    int i = 0;

    do{
        input >> arr[i];
        ++i;
    }while(!input.eof());

    bubbleSort(arr, m);

    for(int i = m - 1; i >= m - n; i--){cout << arr[i] << endl;}

    return 0;
}

void bubbleSort(double * arr, int dim){
    int controllo = 0;

    for (int i = dim - 1; i > 0 && controllo < dim; --i){
        controllo = 0;
        for (int j = 0; j < i; ++j){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
            }else
                ++controllo;
        }
    }
}