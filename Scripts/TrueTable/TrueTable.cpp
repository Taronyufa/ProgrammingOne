using namespace std;
#include <iostream>

int main(){

    bool p, q, table1, table2;

    cout << "inserisci p: ";
    cin >> p;

    cout << "inserisci q: ";
    cin >> q;

    // solution withouth if
    table1 = (p == q) || q;

    // solution with if
    table2 = (p == true && q == false) ? false : true;

    cout << table1 << endl << table2;

    return 0;
}