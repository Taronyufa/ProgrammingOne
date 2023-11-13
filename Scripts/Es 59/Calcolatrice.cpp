// Scrivere un programma che, dati a linea di comando tre valori,
// due numeri e un operatore, ritorni a video il risultato
// dell’operazione matematica definita dall’operatore.

using namespace std;
#include <iostream>
#include <cstdlib>

int calc(int a, int b, char operazione);

int main(int argc, char * argv []){


    if (argc != 4){
        cout << "Usage: ./Calcolatrice.exe <a> <b> <operazione>";
    }

    cout << "Result: " << calc(atoi(argv[1]), atoi(argv[2]), argv[3][0]);

    return 0;
}

int calc(int a, int b, char operazione){
    switch (operazione){
        case '+':
            return a + b; 

        case '-':
            return a - b;

        case '*':
            return a * b;      

        case '/':
            if (b != 0){
                return a / b;
            }else{
                cout << "Error: dividing by 0";
                exit(0);
            }
        default:
            cout << "Error: not a valid operator";
            exit(0);
    }
}