// Scrivere un programma che, dato in input un file con un intero per
// riga, crea una lista concatenata con i numeri contenuti nel file

using namespace std;
#include <iostream>
#include <fstream>

struct cella{
    int dato;
    cella *next;
};

void stampalista(cella *first);
void distruggilista(cella *first);
int lenLista(cella *first);
void invertilista(cella *first);
bool isPrime(int n);
cella *removenotPrime(cella *first);

int main(int argc, char * argv []){

    cella *first = new cella {0, NULL};

    if(argc != 2){
        cout << "Usage: ./List.exe <file_input>";
        exit(0);
    }

    fstream input;
    input.open(argv[1], ios::in);

    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    cella *current = first;
    do{

        input >> current -> dato;        
        current-> next = new cella {NULL, NULL};
        current = current -> next;

    }while(!input.eof());

    stampalista(first);

    invertilista(first);

    first = removenotPrime(first);

    stampalista(first);

    distruggilista(first);

    input.close();

    return 0;
}

void stampalista(cella *first){
    cella *current = first;

    while(current -> dato != NULL ){
        cout << current -> dato << "   ";;
        current = current -> next;
    }
    
    cout << endl;
}

void distruggilista(cella *first){
    while (first -> next != NULL){
        cella *current = first;
        while(current -> next -> next != NULL){
            current = current -> next;
        }
        delete current;
    }
}

int lenLista(cella *first){
    cella *current = first;
    int len = 0;

    while(current -> dato != NULL ){
        len += 1;
        current = current -> next;
    }

    return len;
}

void invertilista(cella *first){
    cella *current = first;
    int *elem = new int[lenLista(first)];
    int i = 0;

    while(current -> dato != NULL ){
        elem[i] = current -> dato;
        current = current -> next;
        i+=1;
    }

    for(i = i - 1; i >= 0; i--){
        cout << elem[i] << "   ";
    }

    cout << endl;
}

// 1 = prime | 0 = !prime
bool isPrime(int n){
    
    bool check = true;

    for (int i = 2; i < n && check == true; i++)
        if (n % i == 0)
            check = false;
    
    return check;
}

cella *removenotPrime(cella *first){
    cella *current = first;

    while(isPrime(first -> dato) == 0){
        first = first -> next;
    }

    while(current -> next -> next != NULL ){
        if(isPrime(current -> next -> dato) == 0){
            current -> next = current -> next -> next;
        }
        current = current -> next;
    }

    return first;
}
