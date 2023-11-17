// - Scrivere un programma che, dati in input tre valori dall’utente, riporti a video il maggiore di questi tre
// valori;
// - Scrivere un programma che, data una temperatura in input dall’utente, riporti a video un messaggio
// seguendo le regole sotto elencate:
// T < −273.15 Temperatura impossibile!, −273.15 ≥ T ≥ 0.0 Fa freddo!, 0.0 > T ≥ 18.0 Temperatura cos`ı cos`ı
// 18.0 > T ≥ 30.0 Temperatura accettabile, T > 30.0 Fa caldo!
// - Scrivere un programma che, dati in input i lati di un triangolo, ritorni a video se il triangolo `e isoscele,
// equilatero o scaleno;
// - Scrivere un programma che, dato in input il valore numerico di un mese, ritorni a video il corrispondente
// nome di quel mese 

using namespace std;
#include <iostream>
#include <cmath>

int main(){

    // Exercise 1
    int a, b, c;
    
    cout << "Inserisci a: ";
    cin >> a;

    cout << "Inserisci b: ";
    cin >> b;
    
    cout << "Inserisci c: ";
    cin >> c;

    cout << max(max(a, b), c) << endl;

    // Exercise 2
    float temp;
    cout << "Inserisci temperatura: ";
    cin >> temp;

    if(temp < -273.15){
        cout << "Temperatura impossibile!";
    }else if(temp < 0){
        cout << "Fa freddo!";
    }else if(temp <= 18){
        cout << "Temperatura cosi' cosi'";
    }else if(temp <= 30){
        cout << "Temperatura accettabile";
    }else{
        cout << "Fa caldo!";
    }

    cout << endl;
    
    // Exercise 3
    int l1, l2, l3;
    
    cout << "Inserisci l1: ";
    cin >> l1;

    cout << "Inserisci l2: ";
    cin >> l2;
    
    cout << "Inserisci l3: ";
    cin >> l3;

    if (l1 == l2 && l2 == l3){
        cout << "Equilatero";
    }else if(l1 == l2 && l2 != l3 || l1 == l3 && l3 != l2){
        cout << "Isoscele";
    }else{
        cout << "Scaleno";
    }

    cout << endl;

    // Exercise 4
    int mese;
    cout << "Inserisci mese: ";
    cin >> mese;

    switch(mese){
        case 1:
            cout << "Gennaio";
            break;
        case 2:
            cout << "Febbraio";
            break;
        case 3:
            cout << "Marzo";
            break;
        case 4:
            cout << "Aprile";
            break;
        case 5:
            cout << "Maggio";
            break;
        case 6:
            cout << "Giugno";
            break;
        case 7:
            cout << "Luglio";
            break;
        case 8:
            cout << "Agosto";
            break;
        case 9:
            cout << "Settembre";
            break;
        case 10:
            cout << "Ottobre";
            break;
        case 11:
            cout << "Novembre";
            break;
        case 12:
            cout << "Dicembre";
            break;
        default:
            cout << "Number not valid";
    }

    return 0;
}