using namespace std;
#include <iostream>

int main(){
    int a, b, max, min;
    cout << "inserisci a: ";
    cin >> a;

    cout << "inserisci b: ";
    cin >> b;

    max = b ^ ((b ^ a) & -(b < a));
    min = a ^ ((b ^ a) & -(b < a));

    cout << "max: " << max << endl << "min: " << min;

    return 0;
}