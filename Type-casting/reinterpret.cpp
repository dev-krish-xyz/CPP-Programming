#include <iostream>
using namespace std;

int main() {
    int n ;

    int* nPtr = &n;

    char* chPtr = reinterpret_cast<char*>(nPtr);  // nPtr is converted into charType

    cout<< "adress of nptr : "<< nPtr<<endl;
    cout<< "adress of chPtr : "<< chPtr;
    
    return 0;
}