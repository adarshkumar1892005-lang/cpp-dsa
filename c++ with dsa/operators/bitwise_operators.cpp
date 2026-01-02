#include <iostream>
using namespace std;

int main() {
    int a =5;
    int b =6;
    cout << "a and b is " << (a&b) << endl;
    cout << "a or b is " << (a|b) << endl;
    cout << "not b is " << (~b) << endl;
    cout << "a xor b is " << (a^b) << endl;
    
    
    return 0;
}