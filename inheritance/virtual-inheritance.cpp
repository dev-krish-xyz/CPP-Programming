#include <iostream>
using namespace std;

class Cricket {
    public:
    void match(){
        cout<<"This is the cricket match"<<endl;
    }
};

class Bat : public virtual Cricket {
    public : 
    void batting() {
        cout<<"Batting in class Bat"<<endl;
    }
};

class Bowl : public virtual Cricket {
    public: 
    void bowling() {
        cout<<"Bowling in class Bowl"<<endl;
    }
};

class Allrounder : public Bat, public Bowl  {
    

};
int main() {
    Allrounder a1;
    a1.match();
    
    return 0;
}