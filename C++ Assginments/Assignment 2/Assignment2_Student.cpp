    #include <iostream>
    #include <string>
    using namespace std;

    class Student {

    public:

    Student() {
        cout << "Calling Default Constructor" << endl;
    }

    Student(string name, int age, int id) :
    Name(name), Age(age), ID(id) 
    {
        cout << "Constructor called" << endl;
    }



    ~Student() {

    cout << "Student Destructor" << endl;
    }


    void displayInfo() {
        cout << "Name:\t " << Name  << "\tAge:\t " << Age 
             << "\tID: " << ID << endl;
    }
    void setName(string name) { Name = name; }
    
    void setAge(int age) { Age = age; }
    
    void setID(int id) { ID = id; }
    
    string getName() { return Name; }
    
    int getAge() { return Age; }
    
    int getID() { return ID; }
    
    private:
    string Name;
    int Age;
    int ID;
    };

    int main() {

    Student s1("Mina", 29, 7310);
    s1.displayInfo();
    Student s2;
    s2.setName("Mo");
    s2.setAge(31);
    s2.setID(7817);
    s2.displayInfo();
    return 0;
    }