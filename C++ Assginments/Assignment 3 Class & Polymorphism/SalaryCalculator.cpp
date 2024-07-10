#include "SalaryCalculator.h"
#include <iostream>
using namespace std;
void SalaryCalculator(EMPLOYEE emp) {
    cout << "Salary of " << emp.getID() << " is " 
        << emp.getSalary() << endl;
}