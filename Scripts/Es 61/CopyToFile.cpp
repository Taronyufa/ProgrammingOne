// Scrivere un programma che, dati in input da linea di comando
// i nomi di due file, A e B, copi il contenuto di A all’interno di B.
// Implementare anche dei controlli che avvisino l’utente in caso
// il numero di argomenti sia sbagliato (manca il file di input)
// oppure nel caso in cui il file di input non esista.

using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char * argv []){
    
    if (argc != 3){
        cout << "Usage: ./CopyToFile.exe <file_input> <file_output>";
        exit(0);
    }

    fstream input, output;
    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if (input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    char buffer[256];
    do{
        input >> buffer;
        output << buffer << " ";
    }while(!input.eof());
    output << endl;

    input.close();
    output.close();

    return 0;
}