#include <iostream>
using namespace std;

int main()
{
    enum class Color
    {
        Red,
        Green,
        Blue
    };

    Color c1 = Color::Red;
    cout << sizeof(c1)<<endl;

    enum class eyecolor : char
    {
        blue,
        green,
        brown
    } eye;

    cout<<sizeof(eye);

    return 0;
}
