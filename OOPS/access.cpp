#include <iostream>
using namespace std;

class Demo{

    private:
    int secret = 42;

    protected:
    int half_secret = 21;

    public: 
    int showSecret() {
        return secret;
    }

};

class Derived : public Demo {
        public: 
        void print() {
            cout<<half_secret;  // accessible
        }
    };

int main () {
    Demo d;
   // cout<< d.secret; // error
  // cout<<d.half_secret; // error
    cout<<d.showSecret();
}