#include "Complex.h"
#include <iostream>



int Complex::instanceCounter = 0;
Complex::Complex(int real, int img):
    m_real(real),m_img(img)
    {
        ++instanceCounter;
    };
int Complex:: getCounter () 
{return instanceCounter;}
Complex::~Complex() {
    std::cout << "Complex destructor" << std::endl;
}
int main() {
    Complex c1(3,7);
    Complex c2(7,8);
    std::cout<<"Class Instance: "<<Complex::getCounter()
    <<std::endl;
    return 0;
}
    