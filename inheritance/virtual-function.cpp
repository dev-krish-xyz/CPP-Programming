#include <iostream>
using namespace std;

class Employee {
    public :
    virtual void increaseSalary() {
        cout<< "increament of salary(general)"<<endl;
    }
    
    virtual void promote() {
        cout<<"Promote the employees(general)"<<endl;
    }

    ~Employee() {
        cout<< "Employee destructor"<<endl;
    }

};

class Manager : public Employee {
    public :
    void increaseSalary() override {
        cout<< "Increasing the salary of manager"<<endl;
    }
    
    void promote() override {
        cout<< "Promote the manager"<<endl;
    }


};

class Developer : public Employee {
    public: 
    void increaseSalary() override {
        cout<< "Increasing the salary of Developer"<<endl;
    }
    void promote() override {
        cout<< "Promoting the Developer"<<endl;
    }
};

int main() {

    Manager m;
    Developer d;

    Employee* employees[2] = {&m, &d};
    cout<< "Rasing the salaries..."<<endl;
    for(int i = 0; i<2; i++) {
        employees[i]->increaseSalary();
    }
    cout<<"Promoting employees..."<<endl;
    for(int i = 0; i<2; i++) {
        employees[i]->promote();
    }

    
    return 0;
}