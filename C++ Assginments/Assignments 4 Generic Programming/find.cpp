#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class InputIterator, class T>
  InputIterator find (InputIterator first, InputIterator last, T& val) {
     while (first!= last) {
       if (*first == val) return first;
       ++first;
     }
     return last;

    // for (InputIterator it = first; it != last; ++it)
    // {
    //     if (*it == val)
    //     {
    //         return it;
    //     }
    // }

  }

  int main(){
   vector<int> a = {1,5,3,4,74,6,7,8,9,10};
    int num = *find(a.begin(), a.end(),10);
    cout<<num<<endl;
  }