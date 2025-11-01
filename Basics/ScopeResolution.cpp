#include<iostream>
using namespace std;
int x; //global variable declared
int main(){
    int x = 5; // local variable inside the main function
    ::x = 10;
    cout<<"global variable x = "<<::x<<endl;
    cout<<"local variable x = "<<x;
    return 0;
}