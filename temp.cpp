#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:

    void init(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Friend function declaration
    friend Complex addComplex(Complex cc1, Complex cc2);

    // Function to display result
    void display() { 
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function de finition
Complex addComplex(Complex cc1, Complex cc2) {
    Complex temp;
    temp.real = cc1.real + cc2.real;
    temp.imag = cc1.imag + cc2.imag;
    return temp;
}
 int main() {
    Complex c1,c2;
    c1.init(3.5, 2.5);
    c2.init(1.6, 4.2);
    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex sum = addComplex(c1, c2);

    cout << "Sum of Complex Numbers: ";
    sum.display();

    return 0;
}