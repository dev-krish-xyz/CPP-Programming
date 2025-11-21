#include <iostream>
using namespace std;

class Batsman {
    public:
    void func() {
        cout<< "From class Batsman"<<endl;
    } 
};

class Bowler{
    public:
    void func() {
        cout<< "From class Bowler"<<endl;
    }
};

class Allrounder:public Batsman, public Bowler {

};

int main() {

    Allrounder a1;
    // a1.func();   ->func becomes ambiguous for the compiler

    // Resolving ambiguity scope resolution

    a1.Bowler::func();
    a1.Batsman::func();


    
    return 0;
}