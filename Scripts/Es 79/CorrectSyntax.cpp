// Scrivere un programma che, presi i nomi di due file da linea di
// comando, copi il primo file nel secondo correggendone la sintassi.
// Affinché un testo possa essere considerato corretto, la prima parola del
// testo e tutte le parole dopo i caratteri “.”, “?” e “!” devono iniziare con
// una lettera maiuscola.

using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char * argv []){

    if (argc != 3){
        cout << "Usage: ./CorrectSyntax.exe <file_input> <file_output>";
        exit(0);
    }

    fstream input, output;
    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if(input.fail() || output.fail()){
        cout << "Error: one of the files does not exist";
        exit(0);
    }

    char buffer;

    input >> noskipws;

    input >> buffer;
    if(buffer >= 'a' && buffer <= 'z'){
        buffer -= 32;
    }

    output << buffer;

    while(input >> buffer){
        if(buffer == '.' || buffer == '?' || buffer == '!'){
            output << buffer;
            if(input >> buffer){
                if(buffer >= 'a' && buffer <= 'z'){
                    buffer -= 32;
                }
                output << buffer;
            }
        }else{
            output << buffer;
        }
    }

    input.close();
    output.close();

    return 0;
}