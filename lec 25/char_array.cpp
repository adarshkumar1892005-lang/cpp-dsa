#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};
    char ch[5] = "abcd";
    cout << arr << endl; // print address of arr[0]
    cout << ch << endl; // print whole string

    char * C = &ch[0];

    cout << C <<endl; // print whole string
    cout << *C << endl; // print ch[0];
    cout << &C << endl; // address of pointer

    cout << endl;
    
    cout << ch << endl;  // print whole string
    cout << *ch << endl; // print ch[0];
    cout << &ch << endl; // address of ch
    return 0;
}