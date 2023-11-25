#include "Estrai.h"

void estrai(char parola[], char result[], int i, int j){
    if(parola[i] != '\0'){
        if(parola[i] >= 'A' && parola[i] <= 'Z'){
            result[j] = parola[i];
        }
        estrai(parola, result, i + 1, j + 1);
    }
    result[j] = '\0';
}