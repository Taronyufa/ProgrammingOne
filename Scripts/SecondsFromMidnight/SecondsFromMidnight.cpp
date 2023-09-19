using namespace std;
#include <iostream>

void getTime(int &ore, int &minuti, int &secondi);

int main(string args[])
{
    int ore, minuti, secondi;
    getTime(ore, minuti, secondi);

    ore = ore % 24;

    // find the seconds from midnight
    int result = secondi + minuti * 60 + ore * 3600;

    cout << endl << "i secondi da mezzanotte sono: " << result ;    
    
    return 0;
}

// gets seconds, minutes and hours
void getTime(int &ore, int &minuti, int &secondi){
    
    cout << "inserire le ore: ";
    cin >> ore;
    cout << "inserire i minuti: ";
    cin >> minuti;
    cout << "inserire i secondi: ";
    cin >> secondi;
    
}