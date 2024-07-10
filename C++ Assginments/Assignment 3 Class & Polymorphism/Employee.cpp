#include "Employee.h"
#include "SalaryCalculator.h"
#include <iostream>
using namespace std;

EMPLOYEE :: EMPLOYEE() : 
    m_id{0},m_salary{0} 
    {}
EMPLOYEE :: EMPLOYEE(const EMPLOYEE& copy) {
    m_id = copy.m_id;
    m_salary = copy.m_salary;
}
EMPLOYEE::EMPLOYEE(int id, int salary) :
    m_id(id), m_salary(salary)
    {}
int EMPLOYEE:: getSalary() const 
 {
     return m_salary;
 }   
 EMPLOYEE:: ~EMPLOYEE()
 {
     cout << "Destructor called" << endl;
 }   

int main() {
    EMPLOYEE *e1 = new EMPLOYEE(7,700000);
    EMPLOYEE e2(8,1000000);
    EMPLOYEE e3{e2};
  // cout<<"Emp ID:"<< e1->getID()<<endl;
 //  cout<< "Salary: "<<e1->getSalary()<<endl;
  // cout<<"e3:" << e3.getID()<<endl;
  SalaryCalculator(e2);
    //delete e1;
    return 0;
}