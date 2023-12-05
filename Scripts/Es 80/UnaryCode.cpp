// Sia dato in input un file contenente una sequenza di stringhe formate da
// (massimo 10) ripetizioni dell’unico carattere * e separate da uno o più
// spazi e ritorni a capo. Le stringhe rappresentano una sequenza di interi
// positivi codificati in codice unario. Scrivere un programma che calcoli la
// media dei valori contenuti nel file e la appenda a fine file in codice unario
// (arrotondato per difetto). Usare solo le librerie <fstream> e <iostream>

using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char * argv []){

    if(argc != 2){
        cout << "Usage: ./UnaryCode.exe <file_input>";
        exit(0);
    }

    fstream input;
    input.open(argv[1], ios::in);

    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    char buffer[10];
    int media = 0;
    int nNumeri = 0;
    while(input >> buffer){
        for(int i = 0; buffer[i] != '\0'; i++, media++){
            ;
        }
        nNumeri += 1;
    }

    input.close();

    input.open(argv[1], ios::app);

    input << endl;

    for(int i = 0; i < media / nNumeri; i++){
        input << "*";
    }

    input.close();

    return 0;
}