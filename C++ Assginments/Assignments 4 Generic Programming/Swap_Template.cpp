#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
template <class T>

void Swap(T& a, T& b) 
{
    T temp = a; //Copy constructor
    a = b;  //equal operator
    b = temp;
    
}
class Person {
    public:
    Person(string pName, int pAge) : 
    mName(pName), mAge(pAge) 
    {}
   
    Person(const Person& CopyObject)
    {
        this->mName = CopyObject.mName;
        this->mAge = CopyObject.mAge;
    }
    Person& operator=(const Person& CopyObject)
    {

        this->mName = CopyObject.mName;
        this->mAge = CopyObject.mAge;
        return *this;
    }
    Person& operator>(Person& CopyObject)
    {
        return this->mAge  > CopyObject.mAge ?  *this : CopyObject;
    }
    string getName() const { return mName; }
    int getAge() const {return mAge; }
    private:
    string mName;
    int mAge;
};

int main() {

    Person person1("Mina", 7);
    Person person2("Merna", 10);
     cout<<"before Swap " <<"Person1: " <<person1.getName() 
    <<" Person2: " <<person2.getName()<<endl;
    swap<Person>(person1, person2);
    cout<<"After Swap " <<"Person1: " <<person1.getName() 
    <<" Person2: " <<person2.getName()<<endl;
    return EXIT_SUCCESS;
}