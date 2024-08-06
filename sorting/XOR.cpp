#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary

    int xorResult = a ^ b;  // Perform XOR operation
    cout<<bitset<5>(a)<<endl;
    cout<<bitset<5>(b)<<endl;
    cout<<bitset<5>(xorResult)<<endl;

    // cout << "a = " << bitset<4>(a) << " (" << a << " in decimal)" << endl;
    // cout << "b = " << bitset<4>(b) << " (" << b << " in decimal)" << endl;
    // cout << "a ^ b = " << bitset<4>(xorResult) << " (" << xorResult << " in decimal)" << endl;

    return 0;
}
