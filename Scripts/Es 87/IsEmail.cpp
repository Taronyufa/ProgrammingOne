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
    int nCompat = 0;
    input >> noskipws;

    
    while(input >> buffer){
        while(input >> buffer && buffer != char(32)){
            if(buffer == '@'){
                input >> buffer;
                if(buffer >= 'a' && buffer <= 'z' || buffer >= 'A' && buffer <= 'Z'){
                    while(input >> buffer && buffer != char(32)){
                        if(buffer == '.'){
                            input >> buffer;
                            if(buffer >= 'a' && buffer <= 'z' || buffer >= 'A' && buffer <= 'Z'){
                                nCompat += 1;
                            }
                        }
                    }
                }
            }
        }
    }

    input.close();

    cout << nCompat;

    return 0;
}