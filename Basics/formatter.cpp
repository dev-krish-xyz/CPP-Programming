#include <iostream>  // for cin, cout, cerr, clog
#include <iomanip> // setw, setprecision, fixed, scientific
#include <cstdio> // c style formatting
using namespace std;

int main() {
    int x =5, y = 12345;

    //c style
    printf("c style -> %5d %5d\n", x, y);

    //c++ style
    cout<< "c++ style ->"<< setw(5)<< x << " "<< setw(5)<< y<<endl;

    return 0;
}