// Scrivere un programma che, dato in input il nome di un file
// F e una lettera L, stampi a video il contenuto di quel file,
// sostituendo ogni occorrenza della lettera L con il simbolo 

using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char * argv []){

    if(argc != 2){
        cout << "Usage: ./SostLettera.exe <file_input>";
        exit(0);
    }

    fstream input;
    input.open(argv[1], ios::in);

    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    char buffer[256];
    do{
        input >> buffer;
        for(int i = 0; i < strlen(buffer);  i++){
            if(buffer[i] == 'l'){
                buffer[i] = '?';
            }
        }
        cout << buffer << " ";
    }while(!input.eof());

    input.close();

    return 0;
}