#include <iostream>
using namespace std;

class Complex {
    private:
    float real, imag;

    public:
    void init(float r = 0, float i =0){
        real = r;
        imag = i;
    }
    friend Complex addComplex(Complex c1, Complex c2){
        Complex temp;

        temp.real =c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }

    void display() {
        cout<<real<< " + " << imag <<"i"<<endl;
    }
};

Complex addComplex(Complex cc1, Complex cc2){
    Complex temp;
    temp.real = cc1.real + cc2.real;
    temp.imag = cc1.imag + cc2.imag;
    return temp;
}

int main() {
    Complex c1, c2;
    c1.init(3.5, 2.5);
    c2.init(4.5, 5.6);
    
    cout<< "First complex number";
    c1.display();

    cout<< "second complex number";
    c2.display();

    Complex sum = addComplex(c1, c2);
    sum.display();

    return 0;
}

// we can initialize one object using assignment operator