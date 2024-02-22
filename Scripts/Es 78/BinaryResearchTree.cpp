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
void deleteTree (nodo *radice);
nodo* sumTree (nodo *t1, nodo *t2);
nodo* mergeTree(nodo* t1, nodo *t2);
int contaPari(nodo* radice, int npari = 0);
int contaDispari(nodo* radice, int ndispari = 0);
nodo* delNodo(nodo *radice, int n);
nodo* delNodo_aux(nodo* radice);

int main(int argc, char * argv []){

    nodo *radice = NULL;
    nodo *radice2 = NULL;

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

    input.open("Input2.txt", ios::in);

    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    input >> buffer;
    radice2 = new nodo {buffer, NULL, NULL};

    while(input >> buffer){
        nodo* newNodo = new nodo{buffer, NULL, NULL};
        InsertNode(radice2, newNodo);
    }

    input.close();

    /* stampaAlbero(radice);

    cout << endl; 

    stampaOrdinato(radice);

    cout << endl;

    ricerca(radice, 8);

    cout << endl;

    nodo* summedTree = sumTree(radice, radice);

    stampaOrdinato(summedTree);

    cout << endl;

    stampaOrdinato(radice);

    cout << endl;

    stampaOrdinato(radice2);

    cout << endl;

    nodo* mergedTree = mergeTree(radice, radice2);

    stampaOrdinato(mergedTree);

    deleteTree(radice);

    deleteTree(radice2);

    cout << contaPari(radice) << endl << contaDispari(radice) << endl;

    radice = delNodo(radice, 6);

    stampaAlbero(radice);

    cout << endl; */

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

void deleteTree (nodo *radice){
    if (radice == NULL) return; 

    deleteTree(radice -> nodosx); 
    deleteTree(radice -> nododx); 
    
    delete radice;
}

nodo* sumTree (nodo *t1, nodo *t2){
    if(!t1) return t2;
    if(!t2) return t1;

    t1 -> value += t2 -> value;

    t1 -> nodosx = sumTree (t1 -> nodosx, t2 -> nodosx);
    t1 -> nododx = sumTree (t1 -> nododx, t2 -> nododx);

    return t1;

}

nodo* mergeTree(nodo* t1, nodo *t2){

    if(t2 -> nodosx == NULL && t2 -> nododx == NULL){
        nodo* newNodo = new nodo{t2 -> value, NULL, NULL};
        InsertNode(t1, newNodo);
    }else{
        if(t2 -> nodosx != NULL){mergeTree(t1, t2 -> nodosx);}
        nodo* newNodo = new nodo{t2 -> value, NULL, NULL};
        InsertNode(t1, newNodo);
        if(t2 -> nododx != NULL){mergeTree(t1, t2 -> nododx);}
    }
    
    return t1;
}

int contaPari(nodo* radice, int npari){
    if(radice -> nodosx == NULL && radice -> nododx == NULL){
        if(radice -> value % 2 == 0){npari += 1;}
    }else{
        if(radice -> nodosx != NULL){npari = contaPari(radice -> nodosx, npari);}
        if(radice -> value % 2 == 0){npari += 1;}
        if(radice -> nododx != NULL){npari = contaPari(radice -> nododx, npari);}
    }

    return npari;
}

int contaDispari(nodo* radice, int ndispari){
    if(radice -> nodosx == NULL && radice -> nododx == NULL){
        if(radice -> value % 2 != 0){ndispari += 1;}
    }else{
        if(radice -> nodosx != NULL){ndispari = contaDispari(radice -> nodosx, ndispari);}
        if(radice -> value % 2 != 0){ndispari += 1;}
        if(radice -> nododx != NULL){ndispari = contaDispari(radice -> nododx, ndispari);}
    }

    return ndispari;
}

nodo* delNodo(nodo *radice, int n){

    if(radice == NULL){
        return radice;
    }

    if(radice -> value > n){
        radice -> nodosx = delNodo(radice -> nodosx, n);
        return radice;
    }

    if(radice -> value < n){
        radice -> nododx = delNodo(radice -> nododx, n);
        return radice;
    }

    if (radice -> nodosx == NULL) {
        nodo* temp = radice -> nododx;
        delete radice;
        return temp;
    }
    
    else if (radice -> nododx == NULL) {
        nodo* temp = radice -> nodosx;
        delete radice;
        return temp;
    }

    else {
 
        nodo* succParent = radice;
        nodo* succ = radice -> nododx;

        succParent = delNodo_aux(succ);
        succ = succParent -> nodosx;
 
        if (succParent != radice)
            succParent -> nodosx = succ -> nododx;
        else
            succParent -> nododx = succ -> nododx;
 
        radice -> value = succ -> value;
 
        delete succ;
        return radice;
    }
}

nodo* delNodo_aux(nodo* radice){
    if(radice -> nodosx -> nodosx == NULL)
        return radice;
    else
        return delNodo_aux(radice -> nodosx);
}

