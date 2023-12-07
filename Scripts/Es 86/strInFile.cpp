using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char * argv []){

    if(argc != 3){
        cout << "Usage: ./CardSniffer.exe <string> <input_file>";
        exit(0);
    }

    string cont = argv[1];

    fstream input;
    input.open(argv[2], ios::in);

    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    char buffer;
    bool check = false;
    while(input >> buffer && !check){
        if (buffer == cont[0]){
            check = true;
            for(int i = 1; cont[i] != '\0' && !input.eof() && check; i++){
                input >> buffer;
                if(buffer != cont[i])
                    check = false;
            }
        }
    }

    cout << check;

    input.close();

    return 0;
}