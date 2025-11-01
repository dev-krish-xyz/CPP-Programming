#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
    vector<int> nums = {4, 5, 6, 7, 6};

    // algo
    sort(nums.begin(), nums.end());
    cout<<"sorted numbers";
    for(int n: nums) cout<< n << " ";
    cout<<endl;

    //math
    double val = sqrt(16);
    cout<< "square root of 16 =" << val <<endl;

    // fle handeling
    ofstream file("output.txt");
    file<< "numbers written to file" << endl;
    file.close();

    return 0;
}