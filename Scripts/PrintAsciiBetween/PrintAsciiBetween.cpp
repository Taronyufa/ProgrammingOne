// Scrivere un programma che stampi a video i caratteri
// compresi tra un intervallo di valori ASCII (quindi, interi)
// a e b definito dall’utente in input.

using namespace std;
#include <iostream>

int main(){

    int a = 1;
    int b = 0;

    while( a > b && a > 0 && b < 127){
        cout << "inserisci a: ";
        cin >> a;
        
        cout << "inserisci b: ";
        cin >> b;
    }

    while (a <= b){
        cout << char(a) << endl;
        a++;
    }

    return 0;
}