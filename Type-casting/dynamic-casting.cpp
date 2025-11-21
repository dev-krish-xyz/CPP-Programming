#include <iostream>
using namespace std;

class Animal {

    public : 
    virtual void speak() {
        cout <<"Animal speaks"<< endl;
    }
};

class Dog : public Animal {
    public : 
    void speak() {
        cout<< "Dog speaks"<<endl;
    }
};

class Cat : public Animal {
    public : 
    void speak() {
        cout<< "cat speaks"<<endl;
    }
};




int main() {
  
    Animal* animalPtr = new Dog();

    //downcasting
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);

    if(dogPtr) {
      dogPtr-> speak();
    }

    else {
        cout<< "failed to cast to dog"<<endl;
    }

    Cat* catPtr = dynamic_cast<Cat*> (animalPtr);
    if(catPtr) {
        catPtr->speak();
    }
    else {
        cout<<"failed to cast to cat"<<endl;
    }

    delete animalPtr;
    
    return 0;
}
