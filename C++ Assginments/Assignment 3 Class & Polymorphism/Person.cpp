#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person{
    public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    
    protected:
    string Name;
    u_int16_t Age;
};
class Professor : public Person {
    public:
    static int p_id;

    Professor() : cur_id{1}
    {}
    void getdata() override{
        cin >> Name >> Age >> publications;
        cur_id = ++p_id;
        
    }
    void putdata() override{
        cout << Name << " " << Age << " " << publications << " " << cur_id << endl;
    }
    private:
    u_int16_t publications;
    u_int16_t cur_id;
};
int Professor::p_id = 0;


class Student : public Person {
    public:
    Student(){}
    void getdata() override{
        cin>> Name >> Age;
        for(int i = 0; i < 6; i++){
            cin >> s_mark[i];
        }
        cur_id = ++s_id;
    }

void putdata() override{
    u_int16_t sum{0};
    for(int i = 0; i < 6; i++){
        sum += s_mark[i];
    }
    cout << Name << " " << Age << " " << sum << " " << cur_id << endl;
}

    static int s_id;
    private:
    u_int16_t cur_id{2};
    u_int16_t s_mark[6];
};
int Student::s_id = 0;
int main() {


    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;



return 0;
}