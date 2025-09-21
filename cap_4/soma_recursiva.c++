#include <iostream>
#include <vector>

using std::cout;
using std::endl;

template <typename T>
T sum(std::vector<T> arr){
    if (arr.empty()) return 0;

    T last_num = arr.back();
    arr.pop_back();
    return last_num + sum(arr);
}

int main(){
    std::vector<int> arr_int = {1, 2, 3, 4};
    std::vector<float> arr_float = {0.1, 0.2, 0.3, 0.4, 0.5};

    cout << "Soma inteiros: " << sum(arr_int) << endl;
    cout << "Soma floats: " << sum(arr_float) << endl;
}