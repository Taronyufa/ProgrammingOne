// Partendo dall’implementazione di una Pila tramite liste concatenate
// scrivere un programma che prenda in ingresso un file con un intero per
// riga e lo copi su un altro file con le righe in ordine inverso

using namespace std;
#include <iostream>
#include <fstream>
#include "pila.h"

int main(int argc, char * argv []){

	pila_init();

    if(argc != 3){
        cout << "Usage: ./List.exe <file_input> <file_output>";
        exit(0);
    }

    fstream input, output;
    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

	int buffer;

	do{

		input >> buffer;
		pila_push(buffer);

	}while(!input.eof());

    input.close();

    while (!pila_vuota()){
        pila_top(buffer);
        output << buffer << endl;
        pila_pop();
    }

    output.close();

    return 0;
}