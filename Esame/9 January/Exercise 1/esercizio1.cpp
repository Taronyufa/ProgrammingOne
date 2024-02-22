using namespace std;
#include <iostream>
#include <fstream>

int BtoD(int n[], int len);
int power(int base, int exp);
int somma(int array[], int len);

int main(int argc, char * argv []){

    if(argc != 3){
        cout << "Usage: ./esercizio.exe <file_input> <file_output>";
        exit(0);
    }

    fstream input, output;

    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if (input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    if (output.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    char buffer[127];

    // this should be in a function but it works so nvm
    while(input >> buffer){
        
        //just a bunch of usefull variables
        int i = 0, j = 0, r = 0, result;
        int temp[8], num[13];

        while (buffer[i] != '\0'){

            if(buffer[i] == '+' || buffer[i] == '=' || buffer[i] == ';'){

                // if its the end of the buffer string then check the result and write the output file
                if(buffer[i] == ';'){

                    result = BtoD(temp, j);
                    // if the result is correct then write it, if not then write "Errore"
                    if (somma(num, r) == result)
                        output << result << endl;
                    else
                        output << "Errore" << endl;

                    r = 0;

                // take the binary number, convert it in decimal and put it in the num array
                }else{

                    num[r] = BtoD(temp, j);
                    r += 1;
                }

                j = 0;
            }else{
                // takes the char binary number and move it in the int array
                temp[j] = buffer[i] - 48;
                j += 1;
            }

            i += 1;
        }
    }

    // close the files
    input.close();
    output.close();
    
    return 0;
}

int BtoD(int n[], int len){
    int res = 0;

    for(int i = 0; len > 0; len--, i++){
        res += n[len - 1] * power(2, i); 
    }

    return res;
}

int power(int base, int exp){
    int res = 1;
    
    for( int i = 0; i < exp; i++){
        res *= base;
    }

    return res;
}

int somma(int array[], int len){
    int res = 0;

    for (int i = 0; i < len; i++){
        res += array[i];
    }

    return res;
}