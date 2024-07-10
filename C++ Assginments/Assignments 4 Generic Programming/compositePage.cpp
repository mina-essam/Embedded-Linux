#include <iostream>
#include <vector>

using namespace std;

class PageObject {
    virtual void addItem(PageObject a){};
    virtual void removeItem(){};
    virtual void deleteItem(PageObject a){};
};
class Page : public PageObject{

    public:
    void  addItem(PageObject a){
        cout << "Page add item" << endl;
    }
    void removeItem(){
        cout<<"Page remove item" <<endl;
    }
    void deleteItem(PageObject a){
        cout << "Page delete item" << endl;
    }

};
class Copy: public PageObject{
public:
    void addElement(PageObject a){
        pages.push_back(a);
    }
    void addItem(PageObject a){

        cout<<"Page add"<<endl;
    }
    void removeItem(){
        cout<<"Page remove"<<endl;
    }
    void deleteItem(PageObject a){
        cout<<"Page delete"<<endl;
    }

private:
    vector<PageObject> pages; 
};

int main() {
Page P1;
Page P2;
Copy Book;
Book.addElement(P1);
Book.addElement(P2);
Book.addItem(P1);
Book.addItem(P2);
Book.removeItem();
Book.removeItem();
    return EXIT_SUCCESS;
}