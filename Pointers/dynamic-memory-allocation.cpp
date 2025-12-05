#include <iostream>
using namespace std;

class Allocate {
    private :
    string name;
    int age;
    public: 
    Allocate(string x, int y) : name(x), age(y) {
        cout << "memory allocated for a"<<endl;
    }
    ~Allocate() {
        cout <<"memory deallocated for a"<< endl;
    }
    void display () {
        cout << name<<endl<<age;
    }


};


int main() {
    Allocate *a1 = new Allocate("alice", 20);
    Allocate *a2 = new Allocate("alex", 39);
    a1-> display();
    cout<<endl;
    a2-> display();
    int *p1 = new int(10);
    int *p2 = new int (20);
    return 0;
}