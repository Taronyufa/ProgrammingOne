using namespace std;
#include <iostream>

double getPrezzoIva();

int main (){
    double prezzoFin = getPrezzoIva();

    cout << "il prezzo piu' iva e': " << prezzoFin;

    return 0;
}

// gets the two variables and them find the price plus iva
double getPrezzoIva(){

    double iva, prezzo;

    cout << "inserisci iva: ";
    cin >> iva;
    cout << "inserisci prezzo: ";
    cin >> prezzo;

    return prezzo + (prezzo * iva ) / 100;
}