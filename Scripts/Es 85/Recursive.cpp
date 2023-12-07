using namespace std;
#include <iostream>

int calcola_ric (int x, int y);

int main(){
    
    cout << calcola_ric(5, 2);

    return 0;
}

int calcola_ric (int x, int y){
    if(x < y){
        return 0;
    }else{
        return 1 + calcola_ric(x - y, y);
    }
}