using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char * argv []){

    if(argc != 2){
        cout << "Usage: ./CardSniffer.exe <input_file>";
        exit(0);
    }

    fstream input;
    input.open(argv[1], ios::in);

    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    char buffer;
    bool check;
    int nCards = 0;

    while(input >> buffer){
        check = true;
        if(buffer >= '0' && buffer <= '9'){
            for(int i = 0; i < 15 && !input.eof() && check; i++){
                input >> buffer;
                cout << buffer;
                if(buffer < '0' || buffer > '9')
                    check = false;
            }
            if(check)
                nCards += 1;
        }
    }

    input.close();

    cout << endl << "Il numero di stringhe compatibili nel file e': " << nCards;

    return 0;
}