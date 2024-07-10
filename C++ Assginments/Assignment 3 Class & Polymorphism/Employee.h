#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class EMPLOYEE {
    public:
    EMPLOYEE();
    EMPLOYEE(int id, int salary);
    EMPLOYEE(const EMPLOYEE& copy);
    inline int getID() const { return m_id; }
    int getSalary() const;
    ~EMPLOYEE();


   private:
   int m_id;
   int m_salary; 
};

#endif