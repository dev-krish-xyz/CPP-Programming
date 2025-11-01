#include <iostream>
#include <string>

// A simple "buffer" like streambuffer
class MyBuffer {
public:
    void write(const std::string& s) {
        std::cout << s;  // in real STL this would talk to stdout
    }
};

// class like ostream
class MyOstream {
    MyBuffer* buf;
    public: 
    MyOstream(MyBuffer* b) : buf(b) {}

    MyOstream& operator<<(const std::string& s){
        buf->write(s);
        return *this;
    }
    MyOstream operator<<(int value){
        buf-> write(std::to_string(value));
        return *this;
    }


};

// like namespace std
MyBuffer globalBuffer;
MyOstream myCout(&globalBuffer);

int main (){
    myCout<<"hello"<<123<<"world\n";
    return 0;
}

