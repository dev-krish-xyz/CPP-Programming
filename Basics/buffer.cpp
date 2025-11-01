#include <iostream>
using namespace std;

int main () {
    cout << "hello" << flush;
    streambuf* buf = cout.rdbuf(); // returns the pointer to the buffer
    buf -> sputc('A');
    buf -> sputn("BC\n",3);

    reading input buffer directly
    cout<< "enter text:";
    streambuf* buf = cin.rdbuf();

    char c = buf->sbumpc();  // read one char
    cout<< "first char: "<< c << endl;
}