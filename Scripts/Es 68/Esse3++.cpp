// Scrivere un programma che utilizzi tutte le funzioni definite nei precedenti
// esercizi per fornire delle funzionalità molto semplici di database per
// memorizzare i dati degli studenti. La dimensione del database è fissata a priori a
// 100. Il programma dovrà permettere all’utente di eseguire le seguenti azioni:
// Aggiungere un utente al sistema (se si raggiunge la dimensione massima
// notificare l’utente);
// Cercare un utente per matricola, nome/cognome e stamparlo a video (se
// l’utente non esiste, notificare l’utente);
// Ritornare l’utente con la media ponderata più alta;
// Caricare gli studenti da un file esterno.

using namespace std;
#include <iostream>
#include <fstream>
#include <cstring> 

struct Studente{
    char nome[30];
    char cognome[30];
    int matricola;
    float media;
};

Studente *genera_studente(char nome[30], char cognome[30], int matricola, float media);
void stampa_studente(Studente *s);
int cerca_matricola(Studente **database, int matricola, int DIM);
int cerca_nome_e_cognome(Studente ** database, char *nome, char *cognome, int DIM);
int studente_top_media(Studente ** database, int DIM);

int main(int argc, char * argv []){

    if(argc != 3){
        cout << "Usage: ./Esse3++.exe <file_input> <n>fghj";
        exit(0);
    }

    int n = atoi(argv[2]);

    fstream input;
    input.open(argv[1], ios::in);
    if(input.fail()){
        cout << "Error: the file does not exist";
        exit(0);
    }

    Studente **database = new Studente*[n];

    char nome[30];
    char cognome[30];
    int matricola;
    float media;
    int i = 0;

    do{
        input >> nome;
        input >> cognome;
        input >> matricola;
        input >> media;

        database[i] = genera_studente(nome, cognome, matricola, media);
        ++i;

    }while(!input.eof());

    for(int i = 0; i < n; i++){
        stampa_studente(database[i]);
    }

    cout << cerca_matricola(database, 206543, n) << "   " ;
    cout << cerca_nome_e_cognome(database, "Francesco", "Barbieri", n) << "   ";
    cout << studente_top_media(database, n);

    return 0;
}

Studente *genera_studente(char nome[30], char cognome[30], int matricola, float media){

    Studente *temp = new Studente;
    strcpy(temp -> nome, nome);
    strcpy(temp -> cognome, cognome);
    temp -> matricola = matricola;
    temp -> media = media;


    return temp;
    
}

void stampa_studente(Studente *s){
    cout << "Nome: " << s -> nome << ", Cognome: " << s -> cognome << ", Matricola: " << s -> matricola << ", Media: " << s -> media << endl;
}

int cerca_matricola(Studente **database, int matricola, int DIM){
    for(int i = 0; i < DIM; i++){
        if (database[i] -> matricola == matricola)
            return i;
    }

    return -1;
}

int cerca_nome_e_cognome(Studente ** database, char *nome, char *cognome, int DIM){
    for(int i = 0; i < DIM; i++){
        if (strcmp(database[i] -> nome, nome) == 0 && strcmp(database[i] -> cognome, cognome) == 0)          
            return i;
    }

    return -1;
}

int studente_top_media(Studente ** database, int DIM){
    int media = 0;
    for(int i = 1; i < DIM; i++){
        if(database[media] -> media < database[i] -> media)
            media = i;
    }

    return media;
}