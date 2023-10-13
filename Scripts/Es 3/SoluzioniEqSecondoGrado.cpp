// Dati in input tre numeri reali, a, b e c, scrivere
// un programma che calcoli le soluzioni dell’equazione di
// secondo grado (assumete che il delta sia positivo).


using namespace std;
#include <iostream>
#include <cmath>

void getNumbers(int &a, int &b, int &c);

int main(){

    int a, b, c;
    getNumbers(a, b, c);
    
    // find the two solutions
    double delta = sqrt((b * b) - 4 * (a * c));
    double solution1 = (-b + delta) / (2 * a);
    double solution2 = (-b - delta) / (2 * a);

    cout << "solution 1 : " << solution1 << endl << "solution 2 : " << solution2;

    return 0;
}

// gets a, b and c 
void getNumbers(int &a, int &b, int &c){
    
    cout << "inserire a: ";
    cin >> a;
    cout << "inserire b: ";
    cin >> b;
    cout << "inserire c: ";
    cin >> c;

}
