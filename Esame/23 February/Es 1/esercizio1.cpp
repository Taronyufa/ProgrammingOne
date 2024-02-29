#include <iostream>
#include <fstream>

// Inserire qui sotto la soluzione all'esercizio
using namespace std;
float percentuale (int misurazioni, int nmot2);

int main(int argc, char * argv []){

    if(argc != 3){
        cout << "Usage: ./a.out <file_input1> <file_input2>";
        exit(0);
    }

    fstream motore1, motore2;

    motore1.open(argv[1], ios::in);

    if (motore1.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    motore2.open(argv[2], ios::in);

    if (motore2.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    float mot1, mot2;
    int nmisurazioni = 0, nmot2 = 0;

    while(motore1 >> mot1 && motore2 >> mot2){
        nmisurazioni += 1;

        if(mot2 > mot1){
            nmot2 +=1;
        }
    }

    if(nmisurazioni == 0){
        cout << "Il numero delle misurazioni e' uguale a zero, per cui non posso calcolare la percentuale";
    }else{
        cout << "La percentuale di misurazioni in cui la temperatura del motore1 ha superato quella del motore2 e' del " << percentuale(nmisurazioni, nmot2) << "%";
    }

    motore1.close();
    motore2.close();

    return 0;
}

float percentuale (int misurazioni, int nmot2){

    return (nmot2 * 100) / misurazioni;

}