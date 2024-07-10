#include <iostream>
using namespace std;

struct Fruit{
public:
 /*Default Constructor*/
Fruit() {}

/*Parmeter Constructor*/
Fruit(uint16_t p_Price_Weight, uint16_t p_mWeight) :
price_KG(p_Price_Weight), mWeight(p_mWeight)
{
    cout << "Fruit Constructor" << endl;
}


~Fruit()
{
    cout << "Fruit Destructor" << endl;
}
void setFruitPrice(uint16_t price) {
    price_KG = price;
}
void setFruitWeight(uint16_t weight) {
    mWeight = weight;
}
uint16_t getFruitPrice() {
    return price_KG;
}
uint16_t getFruitWeight() {
    return mWeight;
}
uint16_t getTotalPrice() {
    return price_KG * mWeight;
}
private:
    uint16_t price_KG;
    uint16_t mWeight;

};

int main() {
    Fruit apple(100, 10);
    Fruit Avocado;
    Avocado.setFruitPrice(200);
    Avocado.setFruitWeight(20);

    cout << Avocado.getFruitPrice() << endl;
    cout << Avocado.getFruitWeight() << endl;
    cout << Avocado.getTotalPrice() << endl;
    cout << apple.getTotalPrice() << endl;
    cout << apple.getFruitWeight() << endl;
    cout << apple.getFruitPrice() << endl;
    cout << apple.getFruitWeight() << endl;
    cout << apple.getTotalPrice() << endl;
    return 0;
}