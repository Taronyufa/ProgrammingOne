// Scrivere un programma che, dato in input da linea di
// comando il nome di un file, ritorni a video il contenuto del
// suddetto file. Implementare anche dei controlli che avvisino
// l’utente in caso il numero di argomenti sia sbagliato (manca il
// file di input) oppure nel caso in cui il file di input non esista.

using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char * argv []){

    if (argc != 2){
        cout << "Usage: ./Readfile.exe <file_input.txt>";
        exit(0);
    }

    // declares the input operator and open the file
    fstream input;
    input.open(argv[1], ios::in);

    // you can use !input too
    if (input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    char buffer[32];
    do{
        input >> buffer;
        cout << buffer << " ";
    }while(!input.eof());

    input.close();

    return 0;
}