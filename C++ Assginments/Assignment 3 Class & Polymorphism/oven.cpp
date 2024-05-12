#include <iostream>
 using namespace std;
 
 int maxTempreature(int temp) {
    static int max = 0;
    max = max > temp? max : temp;
    return max;
 }

 int main() {
    while (1)

    {
        int temp;
        cin >> temp;
        cout << "Max temp " <<maxTempreature(temp) << endl;
    }

    return 0;
 }