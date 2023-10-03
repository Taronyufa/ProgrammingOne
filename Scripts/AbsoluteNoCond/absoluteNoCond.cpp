using namespace std;
#include <iostream>

int main(){
    int a, b, result;
    cout << "inserisci a: ";
    cin >> a;

    cout << "inserisci b: ";
    cin >> b;

    result = a - b;
    result *= (result > 0) - (result < 0);

    cout << result;

    return 0;
}