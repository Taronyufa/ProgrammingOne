using namespace std;
#include <iostream>
#include <cmath>

int main(){

    // Exercise 1
    int n;
    cout << "Inserisci n: ";
    cin >> n;

    int result = 0;

    for (int i = 0; i < n; i++){
        result += 1 / pow(2, i);
    }

    cout << result << endl;

    return 0;
}