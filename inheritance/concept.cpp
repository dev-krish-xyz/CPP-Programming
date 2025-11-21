#include <iostream>
using namespace std;

class Car {
    private: 
    string engine = "mainstream";

    public: 
    string color = "white";
    void viewColor() {
        cout<< color<< endl;
    }

    string getEngine() {
        return engine;
    }

    void setEngine(string e) {
        engine = e;
    }

    protected: 
    string spares = "available";
};

class Bmw:public Car {
    public : 
    void modifySpares() {
        spares = "bmw-spares";   // remains protected
        cout<< "spares modified to : "<< spares<<endl;
    }
    void modifyEngine(string eng) {
        setEngine(eng);
        getEngine();
        cout<<"Engine modified to: "<<getEngine();
        cout<< endl;
    }


};

class Audi:private Car {

    public :
    void modifyEngine(string eng) {
        setEngine(eng);   
        getEngine();  // accessing the private member
        cout<<"Engine modified to : "<<getEngine();
    }
    void setColor(string c) {
        color = c;   // becomes private
    }
    string getColor() {
        return color;  
    }



};
int main() {

    Car c1;
    c1.viewColor();
    cout <<"BMW modification..."<< endl;


    Bmw m5;
    m5.color = "orange";
    m5.viewColor();
    m5.modifyEngine("m5-engine");

    cout<< "Audi Modification..."<<endl;

    Audi a4;
    a4.setColor("Black");
    cout<< a4.getColor();
    cout<<endl;
    a4.modifyEngine("a4-engine");

  
    cout<<endl;

    
    
    return 0;
}