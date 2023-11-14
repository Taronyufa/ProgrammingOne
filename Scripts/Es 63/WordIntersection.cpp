// Scrivere un programma che, dati in input due file A e B da riga di
// comando, generi un terzo file C che contenga tutte le parole
// presenti in entrambi i file A e B.
// E’ consentito aprire al massimo un unico stream per file.

using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char * argv []){

    // exit if the number of arguments doesn't match the required one
    if(argc != 4){
        cout << "Usage: ./WordIntersection.exe <file_A> <file_B> <file_C>";
        exit(0);
    }

    fstream input, output;
    input.open(argv[1], ios::in);

    // if it can't open the file it stops
    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    // just an array of the maximum and bigger word possibile
    char arr1[1000][100];
    int i = 0;

    do{
        bool check = true;
        input >> arr1[i];

        // if the word already esist in the array it doesn't save it
        for(int j = 0; j <= i - 1 && check; j++){
            if (strcmp(arr1[i], arr1[j]) == 0)
                check = false;
        }

        // if the word doesn't exist in the array then it save it
        if (check)
            i++;
    }while(!input.eof());

    input.close();
    input.open(argv[2], ios::in);

    // if it can't open the file it stops
    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    // just an array of the maximum and bigger word possibile
    char arr2[1000][100];
    int k = 0;

    do{
        bool check = true;
        input >> arr2[k];

        // if the word was already in the old file it doesn't save it
        for(int j = 0; j <= i && check; j++){
            if (strcmp(arr2[k], arr1[j]) == 0)
                check = false;
        }

        // if the word already esist in the array it doesn't save it
        for(int j = 0; j <= k - 1 && check; j++){
            if (strcmp(arr2[k], arr2[j]) == 0)
                check = false;
        }

        // if the word doesn't exist in the array then it save it
        if(check){
            ++k;
        }

    }while(!input.eof());

    input.close();
    output.open(argv[3], ios::out);

    // if it can't open the file it stops
    if(output.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    // it just puts everything in the output file
    for(int f = 0; f < i; f++){output << arr1[f] << " ";}
    for(int f = 0; f < k; f++){output << arr2[f] << " ";}

    return 0;
}