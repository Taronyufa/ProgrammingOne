// Scrivere un programma che, dato in input un file con un intero per riga
// (tutti gli interi sono diversi), crea un albero di ricerca binaria con i
// numeri contenuti nel file. Il primo numero del file è la radice dell’albero.
// Potete usare la libreria <fstream>

using namespace std;
#include <iostream>
#include <fstream>

struct nodo{
    int value;
    nodo *nododx;
    nodo *nodosx;
};

void InsertNode(nodo *radice, nodo *newNodo);
void stampaAlbero(nodo *radice, int spazio = 0);
void stampaOrdinato(nodo *radice);
void ricerca(nodo *radice, int n, int destra = 0, int sinistra = 0);

int main(int argc, char * argv []){

    nodo *radice = NULL;

    /*if (argc != 2){
        cout << "Usage: ./BinaryResearchTree.exe <file_input>";
        exit(0);
    }*/

    fstream input;
    input.open("Input.txt", ios::in);

    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    int buffer;

    input >> buffer;
    radice = new nodo {buffer, NULL, NULL};

    while(input >> buffer){
        nodo* newNodo = new nodo{buffer, NULL, NULL};
        InsertNode(radice, newNodo);
    }

    input.close();

    stampaAlbero(radice);

    cout << endl;

    stampaOrdinato(radice);

    cout << endl;

    ricerca(radice, 8);
    

    return 0;
}

void InsertNode(nodo *radice, nodo *newNodo){

    
    if(newNodo -> value < radice -> value){
        if(radice -> nodosx == NULL){
            radice -> nodosx = newNodo;
        }else{
            InsertNode(radice -> nodosx, newNodo);
        }
    }else if(newNodo -> value > radice -> value){
        if(radice -> nododx == NULL){
            radice -> nododx = newNodo;
        }else{
            InsertNode(radice -> nododx, newNodo);
        }
    }

}

void stampaAlbero(nodo *radice, int spazio){
   if (radice != NULL) {
    spazio ++;
    
    stampaAlbero(radice -> nododx, spazio);
 
    for (int i = 1; i < spazio; i++) {
        cout<<"\t";
    }
    cout<<radice -> value<<"\n";
    
    stampaAlbero(radice -> nodosx, spazio);
   }
}

void stampaOrdinato(nodo *radice){
    if(radice -> nodosx == NULL && radice -> nododx == NULL){
        cout << radice -> value << "   ";
    }else{
        if(radice -> nodosx != NULL){stampaOrdinato(radice -> nodosx);}
        cout << radice -> value << "   ";
        if(radice -> nododx != NULL){stampaOrdinato(radice -> nododx);}
    }
}

void ricerca(nodo *radice, int n, int destra, int sinistra){

    if(n == radice -> value){
        cout << "Destra: " << destra << ", Sinistra: " << sinistra;
    }else if(n < radice -> value){
        if(radice -> nodosx == NULL){
            cout << "Number not in the tree";
        }else{
            ricerca(radice -> nodosx, n, destra + 1, sinistra);
        }
    }else{
        if(radice -> nododx == NULL){
            cout << "Number not in the tree";
        }else{
            ricerca(radice -> nododx, n, destra, sinistra + 1);
        }
    }

}