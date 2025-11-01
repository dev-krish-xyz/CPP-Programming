#include<iostream>
using namespace std;
class book{
    public:
    int page;
    int price;
    int copies;

    void showpage(){  //member function
        cout<<"Pages = "<<page<<endl;
    }
    void showprice(){
        cout<<"Price = "<<price<<endl;
    }
    void showcopies(){
        cout<<"Copies = "<<copies<<endl;
    }
};

    int main(){

        book harrypotter;

        harrypotter.page = 540;
        harrypotter.price = 250;
        harrypotter.copies = 20479;

        harrypotter.showpage(); // calling member function
        harrypotter.showprice();
        harrypotter.showcopies();

        return 0;
    }