// Si scriva una funzione che riceva come parametro una stringa di caratteri str e
// restituisca come valore di ritorno un numero intero. Dopo avere verificato che
// la stringa sia composta da caratteri alfabetici (escluso il carattere nullo), la
// funzione converte eventuali caratteri alfabetici maiuscoli in minuscoli; quindi
// calcola e restituisce un punteggio per la stringa str dato dalla somma delle
// differenze assolute tra ciascuna coppia di caratteri consecutivi. Ad esempio,
// data la stringa str = “aa”, la funzione restituisce 0; data la stringa str = “abf”, la
// funzione restituisce 5. Se la stringa non contiene solo caratteri alfabetici, la
// funzione restituisce -1. Si scriva quindi un main che, finché l’utente lo
// desidera, gli chieda di immettere da tastiera una stringa contenente al
// massimo 31 caratteri, chiami la funzione di cui sopra e, in caso di dato valido,
// ne stampi a video il valore di ritorno.

using namespace std;
#include <iostream>
#include <cmath>

int main(){
    string s;

    cout << "Inserisci una Stringa: ";
    cin >> s;

    for(int i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        if(!(s[i] >= 'a' && s[i] <= 'z')){
            return -1;
        }
    }

    int sum = 0;

    for(int i = 0; s[i+1] != '\0'; i++){
        sum += abs(int(s[i] - s[i+1]));
    }

    cout << sum;

    return 0;
}