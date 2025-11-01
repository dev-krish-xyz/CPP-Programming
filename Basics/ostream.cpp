#include <iostream>
using namespace std;

struct Point {
    int x, y;

    friend ostream& operator<<(ostream& os, const Point& p);
};

ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")"; 
    return os;
}

int main () {
    Point p1 = {3,5};
    Point p2 = {10, 30};

    cout<<"First point: "<<p1 << endl;
    cout<<"Second point: "<<p2 <<endl;
}