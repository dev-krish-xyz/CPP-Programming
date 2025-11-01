#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color c1 = RED;
    Color c2 = BLUE;

    cout << "c1 = " << c1 << endl; // prints 0
    cout << "c2 = " << c2 << endl; // prints 2

    enum Status { SUCCESS = 200, ERROR = 404, TIMEOUT = 408 };

    Status success = SUCCESS;
    cout<<success<<endl;

    return 0;
}

// assign custom values 

