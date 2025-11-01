#include<iostream>
using namespace std;
int main(){
    int *ptr1 = new int;
    *ptr1 = 10;
    float *ptr2 = new float(55.345);
    int *ptr3 = new int[25];
    cout<<"value of ptr1 = "<<*ptr1<<endl;
    cout<<"value of ptr2 = "<<*ptr2<<endl;
    for(int i=10;i<15;i++){
        ptr3[i]=i+1;
    }
        cout<<"value of the block memory = ";
        for(int i=10;i<15;i++)
        {
        cout<<ptr3[i]<<" ";
        }


    
return 0;
}