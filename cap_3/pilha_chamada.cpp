#include <iostream>
#include <string>

using std::cout;
using std::endl;

void greet2(std::string name){
    cout << "Como vai voce " + name + "?" << endl;
}
void bye(){
    cout << "Ok tchau" << endl;
}

void greet(std::string name){
    cout << "Ola, " + name + "!" << endl;
    greet2(name);
    cout << "Preparando-se para dizer adeus..." << endl;
    bye();
}

int main(){
    greet("Sara");
    
    return 0;
}