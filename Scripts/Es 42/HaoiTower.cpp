// Scrivere un programma che risolva la Torre di Hanoi
// tramite procedura ricorsiva.

using namespace std;
#include <iostream>

void HanoiTower (int n, int a = 1, int b = 2, int c = 3);

int main(){
    
    int n;
    cout << "inserisci n: ";
    cin >> n;

    HanoiTower(n);

    return 0;
}

void HanoiTower (int n, int a, int b, int c){
    if (n == 1)
        cout << a << " To " << c << endl;
    else{
        HanoiTower(n - 1, a, c, b);
        cout << a << " To " << c << endl;
        HanoiTower(n - 1, b, a, c);
    }
}