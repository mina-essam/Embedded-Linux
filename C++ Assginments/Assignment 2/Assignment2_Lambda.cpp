#include <iostream>
#include <array>
#include <functional>
#include <algorithm>
using namespace std;

constexpr int array_size = 7;
array<int, array_size> Array = {7, 8, 3, 1, 10, 17, 2};

void printArray() {
    for (int i = 0; i < array_size; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void Arrange( array<int, array_size>& arr, function<bool (int,int)> CallBack) {

    sort(arr.begin(), arr.end(), CallBack) ;

    
}
int main(){
  printArray();
  auto arrange = [] (int a, int b) ->bool { 
    return a > b;};
    Arrange(Array, arrange);
    printArray();

  return 0;
}