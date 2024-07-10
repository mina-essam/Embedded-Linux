#include <iostream>
#include<algorithm>
using namespace std;
/*--------------------------------*/


#define returnSucess 0


class IStrategy {
public:
virtual void calculateVehicleSpeed() = 0;
};

class BMWStrategy : public IStrategy {
    void calculateVehicleSpeed() override {
        cout << "BMW Strategy" << endl;
    
}};


class MiniCooperStrategy : public IStrategy {
    void calculateVehicleSpeed() override {
        cout << "MiniCooper Strategy" << endl;
}};

class Vehicle{
    public:
    Vehicle(IStrategy * pStrategy) : __strategy(pStrategy)
    {}
    void calculateSpeed() {
        __strategy->calculateVehicleSpeed();
    }

    private:
    IStrategy *__strategy;
};

int main() {
    BMWStrategy BMW;
    MiniCooperStrategy MiniCooper;
    IStrategy *pStrategy = &MiniCooper;

    pStrategy ->calculateVehicleSpeed();
    pStrategy = &BMW;
    pStrategy ->calculateVehicleSpeed();
    Vehicle X7(&BMW);
    X7.calculateSpeed();

    return returnSucess;
}
