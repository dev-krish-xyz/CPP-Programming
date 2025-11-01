#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;         // private
    string name;        // private

public:
    // Public setter
    void setData(int r, string n)...
Read more
ptrSet)(int, string) = &Student::setData;
    void (Student::ptrDisplay)() = &Student::display;
    int (Student::ptrGet)() = &Student::getRollNo;

      Student s1;

    // Use member function pointer to set and display private data
    (s1.ptrSet)(101, "Alice");
    (s1.ptrDisplay)();
    cout << "Roll No via getter pointer: " << (s1.ptrGet)() << endl;

      // Using object pointer
    Student ptr = new Student;
    (ptr->ptrSet)(102, "Bob");
    (ptr->ptrDisplay)();
    cout << "Roll No via getter pointer: " << (ptr->ptrGet)() << endl;

    delete ptr;
      return 0;
}