#include <iostream>
using namespace std;

class myClass {
    private: 
    int a;
    int b;
    public:
    void setValues(int a, int b) {

        this -> a = a;  // this refers to the object which called this function
        this -> b = b;
    }
    myClass& work (){
        cout<< "work done, you can chain now"<<endl;
        cout<< this<<endl;  // returns the adress of object which called the function
        return *this;
    }
    bool isSame(const myClass& other) {
        return this == &other;
    }
    bool isSame (const myClass* other) {
        return this == other;
    }

};


int main() {
    myClass c1,c2,c3;
    myClass *ptr1, *ptr2, *ptr3;
    ptr1 = &c1;
    ptr2 = &c2;
    ptr3 = &c3;
    ptr1-> work().setValues(10,20);  //chaining
    ptr2-> setValues(10, 20);
    

   cout<< c1.isSame(c2);  // calling the reference type fun
   cout<< ptr1->isSame(ptr2);  // calling the pointer type fun
   cout<< ptr2-> isSame(&c3);  // calling the pointer type fun
    return 0;
}