#include<iostream>
using namespace std;
class student{  // declaring a class student
public:
int marks;  // data members
char grade;
};
int main(){
   student sourav;
   
   sourav.marks=250;  // assigning values with the data members
   sourav.grade='A';
   cout<<"marks of sourav = "<<sourav.marks<<endl; // output of the data members
   cout<<"grade of sourav = "<<sourav.grade;
   return 0;
}