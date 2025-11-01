#include <iostream>
#include <iomanip>
using namespace std;

void printValue(int val) {
  cout << val << endl;
}

void printValue (float val){
    cout << val << endl;
}

void printValue(char ch) {
    cout << ch << endl;
}

int add(int a , int b) {
    return a+b;
}
int add(int a, int b, int c) {
    return a+b+c;
}

int multiply(int a, float b) {
    return a*b;
}
int multiply(float b, int a) {
    return a*b;
}

int main () {
  printValue(42);
  printValue(23.4f);
  printValue('@');

  add(12,23);
  add(2, 4,5);

  multiply(2,3.0f);
  multiply(3.2f,2);

  return 0;
}