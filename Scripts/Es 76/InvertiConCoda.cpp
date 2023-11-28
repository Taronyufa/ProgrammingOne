// Scrivere un programma che inverta gli elementi di una pila usando una
// coda.


using namespace std;
#include <iostream>
#include <fstream>
#include "pila.h"
#include "coda.h"

int main(int argc, char * argv []){

	pila_init();
    coda_init();

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
        coda_enqueue(buffer);
        pila_pop();
    }

    while(!coda_vuota()){
        coda_first(buffer);
        pila_push(buffer);
        coda_dequeue();
    }

    // put the pile in the output file
    while (!pila_vuota()){
        pila_top(buffer);
        output << buffer << endl;
        pila_pop();
    }

    output.close();

    return 0;
}