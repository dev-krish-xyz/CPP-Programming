#include <iostream>
using namespace std;

class Myclass {
    public:
    static int count;

    void increaseCount() {
        count++;
    }
    int getCount() {
        return count;
    }
};
int Myclass::count =0;

int main () {
    Myclass obj1, obj2;
    obj1.increaseCount();
    obj2.increaseCount();

    cout<<obj1.getCount()<<endl;
    cout<<obj2.getCount();

    return 0;
}