#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>

using std::cout;
using std::endl;

int main() {
    std::unordered_map<std::string, float> book = {
        {"maça", 0.67},
        {"leite", 1.49},
        {"abacate", 1.49}
    };

    for(std::pair < std :: string, float > pair : book){
        cout << pair.first << ": " << pair.second << "$" << endl;
    }

}