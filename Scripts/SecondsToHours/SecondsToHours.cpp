// Scrivere un programma che, dati in input i secondi da
// mezzanotte, li salvi in una variabile e ritorni a video
// l’equivalente orario in ore, minuti e secondi.

using namespace std;
#include <iostream>

void secondsToHours(int &seconds, int &minutes, int &hours);

int main(){

    int seconds, minutes, hours;

    cout << "inserisci i secondi: ";
    cin >> seconds;

    secondsToHours(seconds, minutes, hours);

    cout << hours << endl << minutes << endl << seconds;

}

// find the hours, minutes and seconds
void secondsToHours(int &seconds, int &minutes, int &hours){
    
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;

}