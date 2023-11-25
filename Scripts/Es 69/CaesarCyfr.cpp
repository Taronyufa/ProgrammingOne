// Scrivere un programma che implementi il Cifrario di Cesare. Il programma dovrà
// prendere in input il file contenente il messaggio da cifrare (assumete che il file
// contenga solo lettere minuscole e spazi fino ad un massimo di 255 lettere), il
// nome di un file in cui verrà salvato l’output e la chiave di cifratura. All’utente verrà
// inoltre chiesto se intende cifrare o decifrare il messaggio.
// Utilizzare le funzioni della libreria fstream

using namespace std;
#include <iostream>
#include <fstream>

void crypt(char parola [], int chiave);
void decrypt(char parola [], int chiave);

int main(int argc, char * argv []){

    if (argc != 4){
        cout << "Usage: ./CaesarCyfr.exe <input_file> <output_file> <key>";
        exit(0);
    }

    int key = atoi(argv[3]);

    fstream input, output;
    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if(input.fail() && output.fail()){
        cout << "Error: file does not exist";
        exit(0);
    }

    char action;
    cout << "c for crypt, d for decrypt: ";
    cin >> action;

    char buffer[255];

    if (action == 'c'){
        do{
            input >> buffer;
            crypt(buffer, key);
            output << buffer;
            cout << buffer;
        }while(!input.eof());
    }else if (action == 'd'){
        do{
            input >> buffer;
            decrypt(buffer, key);
            output << buffer;
            cout << buffer;
        }while(!input.eof());
    }else{
        cout << "Please select an option";
        exit(0);
    }

    input.close();
    output.close();

    return 0;
}


void crypt(char parola [], int chiave){
    for(int i = 0; parola[i] != '\0'; i++){
        if(parola[i] + chiave <'a'){
            parola[i] = 'z' + (parola[i] + chiave - 'a' + 1);
        }else if(parola[i] + chiave > 'z'){
            parola[i] = 'a' + (parola[i] + chiave - 'z' + 1);
        }else{
            parola[i] += chiave;
        }
    }
}

void decrypt(char parola [], int chiave){
    chiave = - chiave;
    for(int i = 0; parola[i] != '\0'; i++){
        if(parola[i] + chiave <'a'){
            parola[i] = 'z' + (parola[i] + chiave - 'a' + 1);
        }else if(parola[i] + chiave > 'z'){
            parola[i] = 'a' + (parola[i] + chiave - 'z' + 1);
        }else{
            parola[i] += chiave;
        }
    }
}