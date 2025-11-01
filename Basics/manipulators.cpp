#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x = 255;
    cout << "Decimal: " << dec << x << endl;
    cout << "Hex: " << hex << x << endl;
    cout << "Octal: " << oct << x << endl;


    double pi = 3.14159;

    cout << "Default: " << pi << endl;
    cout << "Fixed: " << fixed << setprecision(2) << pi << endl;
    cout << "Scientific: " << scientific << pi << endl;

    cout << setw(10) << setfill('*') << 42 << endl;

}

