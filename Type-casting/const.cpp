#include <iostream>
using namespace std;

int main() {

    int n = 10;

    const int* constPtr = &n;
    
    // int* nonConstPtr = ptr; -error

    int* nonConstPtr = const_cast<int*>(constPtr);

    *nonConstPtr = 10; // no error because of temporary casting

    cout<< *nonConstPtr;
    
    return 0;
}