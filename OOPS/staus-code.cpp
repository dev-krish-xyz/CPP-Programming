#include <iostream>
#include <string>
using namespace std;

enum class HttpStatus : int {
    OK = 200,
    CREATED = 201,
    ACCEPTED = 202,
    NO_CONTENT = 204,
    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    NOT_FOUND = 404,
    INTERNAL_SERVER_ERROR = 500,
    FORBIDDEN = 403
};

string getStatusMsg (HttpStatus status) {
    switch(status) {
        case HttpStatus::OK:
        return "OK- REquest successed";
        case HttpStatus::CREATED:
        return "Created";
        case HttpStatus:: NOT_FOUND:
        return "Not found";
    }
    return "UNKNOWN";
}
bool isSuccess (HttpStatus status) {
    // int code = static_cast<int>(status);
    int code = (int)status;
    return (code >= 200 && code < 300);
}

int main() {
   cout<<  getStatusMsg(HttpStatus::OK)<<endl;
   cout<<isSuccess(HttpStatus::OK);
    return 0;
}