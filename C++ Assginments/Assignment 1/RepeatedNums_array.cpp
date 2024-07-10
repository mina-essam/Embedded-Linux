#include <iostream>
#include <array>
#include <unordered_map>
using namespace std;

int main() {

    array<int,13> NUMS = {3,3,5,8,9,8,9,10,17,10,11,17,10};
    unordered_map<int,int> frequencyMap;


    for (int i = 0; i < NUMS.size(); i++) {
        frequencyMap[NUMS[i]]++;
        
    }
    cout << "Element: \t" << "Repeated:" <<endl; 
    for (auto i: frequencyMap) {
        cout<<i.first<<": \t\t" <<i.second<<endl;
    }
    return 0;
}