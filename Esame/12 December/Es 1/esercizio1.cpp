using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char * argv []){

    if(argc != 2){
        cout << "Usage: ./esercizio1.exe <file_input>";
        exit(0);
    }

    fstream input;

    input.open(argv[1], ios::in);

    if (input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    char buffer[255], search[255];

    cout << "Inserisci i caratteri da cercare: ";
    cin.getline(search, sizeof(search));


    input >> noskipws;

    do{

        input.getline(buffer, sizeof(buffer));

        for(int i = 0; i < strlen(buffer); i++){
            for(int j = 0; j < strlen(search); j++){
                if(buffer[i] == search[j]){
                    cout << search[j];
                }else if(search[j] >= 'a' && search[j] <= 'z'){
                    if(buffer[i] == search[j] - 32) {cout << search[j];}
                }else if(search[j] >= 'A' && search[j] <= 'Z'){
                    if(buffer[i] == search[j] + 32) {cout << search[j];}
                }
            }
        }

        
    }while(!input.eof());

    input.close();

    return 0;
}
