using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char * argv []){

    if(argc != 3){
        cout << "Usage: ./esercizio1.exe <file_input> <file_output>";
        exit(0);
    }

    fstream input, output;

    input.open(argv[1], ios::in);
    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    output.open(argv[2], ios::out);
    if(output.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    int shift;
    cout << "Inserire il numero di shifting: ";
    cin >> shift;

    char buffer[255];

    while(input >> buffer){

        cout << strlen(buffer);

        exit(0);
    }


    input.close();
    output.close();

    return 0;
}

void swap(char &x, char &y){
    x = x + y;
    y = x - y;
    x = x - y;
}