#include <iostream>

using std::cout;
using std::endl;

void coutdown(const int& i){
    cout << i << endl;
    //caso-base
    if(i <= 0) return;\

    //caso-recursivo
    coutdown(i - 1);
}

int main(){
    coutdown(5);
}