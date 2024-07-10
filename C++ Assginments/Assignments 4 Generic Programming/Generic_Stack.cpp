#include <iostream>
#include <vector>
#include "Generic_Stack.h"
using namespace std;
int main() {
    Stack<double> stackDoubles(7);
    Stack<int> stackInts(11);

    stackInts.push(10);
    stackInts.push(7);
    stackInts.push(8);
    stackInts.push(11);
    
    auto element = 0;
    while(stackInts.pop(element))
    {
        cout<<element<<endl;
    }

    return EXIT_SUCCESS;
}