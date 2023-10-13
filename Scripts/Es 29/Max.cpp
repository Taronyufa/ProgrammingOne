// Dati in input da 1 a 5 interi, scrivere una funzione che
// ritorni il valore massimo. Usare argomenti di default per il
// secondo, terzo, quarto e quinto input. 

using namespace std;
#include <iostream>
#include <cmath>
#include <cstdlib>
int Max(int, int n2=INT32_MIN,int n3=INT32_MIN,int n4=INT32_MIN,int n5=INT32_MIN);

int main(){

    int numeri[5];
    int Massimo;   

    srand(time(NULL));
    int n = rand()%5+1;
    
    for(int i=0;i<n;i++){
        cout<<"Inserisci n"<<(i+1)<<" : ";
        cin>>numeri[i];
    } 

    switch(n){
        case 1:
            Massimo=Max(numeri[0]);
            break;
        case 2:
            Massimo=Max(numeri[0],numeri[1]);
            break;
        case 3:
            Massimo=Max(numeri[0],numeri[1],numeri[2]);
            break;
        case 4:
            Massimo=Max(numeri[0],numeri[1],numeri[2],numeri[3]);
            break;
        case 5:
            Massimo=Max(numeri[0],numeri[1],numeri[2],numeri[3],numeri[4]);
            break;
        default:
            break;
    }
    cout<<"Il massimo è  : "<<Massimo<<endl;
    return 0;
}

int Max(int n1,int n2,int n3,int n4,int n5){
    return max(max(max(max(n1,n2),n3),n4),n5);
}