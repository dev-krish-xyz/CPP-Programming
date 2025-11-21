#include <iostream>
using namespace std;

int main() {

    int n = 10;

    // static type casting : compile time

    double n2 = static_cast<double> (n);


    // printing data type
    cout <<n<< " type : "<<typeid(n2).name();

    // dynamic casting

    
    
    return 0;
}