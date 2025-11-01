#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int n , i = 2;
    cout<<"enter a number";
    cin>>n;
    while (i<n)
    {
        if(n%2 == 0 ){
            break;
        }
        i++;
    }
    
    if(i == n ){
        cout<<"prime";
    }
    else {
        cout<<"not prime";
    }
    
}