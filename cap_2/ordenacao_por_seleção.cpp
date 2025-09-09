#include <iostream>
#include <vector>

using std::cout;
using std::endl;

//encontrar o menor valor
template <typename T>
int find_smallest(const std::vector<T>& arr){
    // Guarda o menor valor
    T smallest = arr[0];
    // Guarda o indice de menor valor
    int smallest_index = 0;
    for(int i = 0; i < arr.size(); i++){
        if (arr[i] < smallest){
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

template <typename T>
std::vector<T> selection_sort(std::vector<T> arr){
    std::vector<T> sorted;

    while(!arr.empty()){
        //Encontra o menor elemento e adiciona no array ordenado
        int smallest_index = find_smallest(arr);
        sorted.push_back(arr[smallest_index]);
        
        //Remove o menor elemento de um array nao ordenado
        arr.erase(arr.begin() + smallest_index);
    }
    return sorted;
}

int main(){
    std::vector<float> arr = {1.2, 1.0, 3, 0, -1, 0.5, 100, -99};
    std::vector<float> sorted = selection_sort(arr);

    cout << "Sorted array: ";
    for (float num : sorted){
        cout << num << " ";
    }
    cout << endl;
}