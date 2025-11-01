#include <iostream>
#include <cstdint>
using namespace std;

class Student
{
private:
    string name;
    int age;
public: 
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }
    void getDetails() {
        cout << name<< endl;
        cout << age<< endl;
    }
};

int main()
{
    Student s1, s2;
    Student *ptr1 = &s1; // pointer to object
    Student *ptr2 = &s2;
    ptr1->setDetails("harish", 20);  // using arrow
    (*ptr2).setDetails("ramesh", 30);  // using dot

    ptr1->getDetails();
    (*ptr2).getDetails();



    cout << reinterpret_cast<uintptr_t>(ptr1) << endl;
    cout << sizeof(ptr1);
    return 0;
}