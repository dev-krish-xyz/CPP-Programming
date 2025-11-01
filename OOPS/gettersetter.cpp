#include<iostream>
using namespace std;
class hostel{
string name;
int capacity;
int available;
public:
void setname(string s){
    cout<<"May Day"; // for security reasons
    name =s;
}
void setcapacity(int x){
   capacity = x; 
}
void setavailable(int n){
    available = n;
}
string getname(){
    return name;
}
int getcapacity(){
    return capacity;
}
int getavailable(){
    return available;
}

};
int main()
{
    hostel swarnachuda;
    swarnachuda.setname("swarna");
    swarnachuda.setcapacity(420);
    swarnachuda.setavailable(45);

    cout<<swarnachuda.getname()<<endl;
    cout<<swarnachuda.getcapacity()<<endl;
    cout<<swarnachuda.getavailable();

    return 0;
}