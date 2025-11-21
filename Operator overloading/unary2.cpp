#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inch;

    public: 
    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    void operator- () {
        feet--;
        inch--;
        cout<< feet<<" "<<inch;

        

        

        
    }


};

int main() {
    Distance d1(10, 20);

    -d1;
    
    return 0;
}