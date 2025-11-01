#include <iostream>
#include <iomanip>
#define INT_MAX
#define FLT_MAX
using namespace std;

union U {
    int i;
    float f;
};

int main() {
    U u;

    u.i = INT_MAX;    // largest int
    cout << "After assigning int: i=" << u.i << ", f=" << u.f << endl;

    u.f = FLT_MAX;    // largest float
    cout << "After assigning float: i=" << u.i << ", f=" << u.f << endl;
}
