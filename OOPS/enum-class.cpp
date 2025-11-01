#include <iostream>
using namespace std;

enum class Signal {
    RED, 
    GREEN,
    YEllOW
};

void checkSignal (){
    Signal color = Signal::RED;
    switch(color) {
        case Signal::GREEN: 
        cout<< "Good to go"<<endl;
        break;
        case Signal::RED:
        cout<< "Not to go"<<endl;
        break;
        case Signal::YEllOW:
        cout<<"ready to go"<<endl;
        break;
    }
}

enum class Weekend {
    SATURDAY,
    SUNDAY
};
void checkWeekend() {
    Weekend day = Weekend::SATURDAY;
    if(day == Weekend::SATURDAY) {
        cout<< "First weekend"<<endl;
    }
    else {
        cout<<"Second weekend"<<endl;
    }
}

enum class Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVISION
};

double calculate(double a, double b, Operation op) {
    switch(op) {
        case Operation::ADD :
        return a+b;
        break;
        case Operation::SUBTRACT:
        return a-b;
        break;
        case Operation::MULTIPLY:
        return a*b;
        break;
        case Operation::DIVISION:
        return (b != 0) ? a/b: 0;
        break;
    }
    return 0;
}
void calculatorDemo () {
    double x = 10, y = 30;
    cout<<"Add" << calculate(x,y, Operation::ADD)<<endl;
    cout<<"Sub" << calculate(x,y, Operation::SUBTRACT)<<endl;
    cout<<"Mul" << calculate(x,y, Operation::MULTIPLY)<<endl;
    cout<<"Div" << calculate(x,y, Operation::DIVISION)<<endl;

}

int main() {
    checkSignal();
    checkWeekend();
    calculatorDemo();
    return 0;
}