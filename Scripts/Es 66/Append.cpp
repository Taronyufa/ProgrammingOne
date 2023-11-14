using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

void bubbleSort(int * arr, int dim);
int *merge(int *arr1, int *arr2, int dim1, int dim2);

int main(int argc, char * argv []){
    srand(time(NULL));

    int n, m;

    cout << "Inserisci n: ";
    cin >> n;

    cout << "Inserisci m: ";
    cin >> m;

    int *arr1 = new int[n];
    for(int i = 0; i < n; i++){
        cout << "Inserisci un intero: ";
        cin >> arr1[i];
    }
    bubbleSort(arr1, n);

    int *arr2 = new int[m];
    for(int i = 0; i < m; i++){
        cout << "Inserisci un intero: ";
        cin >> arr2[i];
    }
    bubbleSort(arr2, m);

    int *arr = merge(arr1, arr2, n, m);

    for(int i = 0; i < n + m; i++){cout << arr[i] << "   ";}

    return 0;
}

void bubbleSort(int * arr, int dim){
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

int *merge(int *arr1, int *arr2, int dim1, int dim2){
    int *arr = new int[dim1 + dim2];

    int i = 0, j = 0, k = 0;

    while(i < dim1 && j < dim2){
        if (arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            ++k;
            ++i;
        }else{
            arr[k] = arr2[j];
            ++k;
            ++j;
        }
    }

    if (i == dim1){
        for(; j < dim2; j++, k++)
            arr[k] = arr2[j];
    }else{
        for(; i < dim1; i++, k++)
            arr[k] = arr1[i];
    }

    return arr;
}