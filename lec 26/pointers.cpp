#include <iostream>
using namespace std;

int main() {
    // int num = 4;
    // // intialising pointers 
    // int *p = &num;
    // int *ptr = 0;
    // ptr = &num;

    // cout << "value for p :" << *p << endl;
    // cout << "address for p :" << p << endl;
    // cout << "value for ptr :" << *ptr << endl;
    // cout << "address for ptr :" << ptr << endl;

    // // operations
    // int a =num;
    // cout << "before num is :" << num <<endl;
    // a++; // will not change num value
    // cout << "after num is :" << num <<endl;

    // cout << "before num is :" << num <<endl;
    // (*p)++;
    // cout << "after num is :" << num <<endl;


    // copying a pointer
    int n= 5;
    int *p = &n;
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;
    
    // important concept
    int i= 7;
    int *t = &i;
    cout << "before t " << *t << endl;
    *t = *t +1;
    cout << "after t " << *t << endl;
    cout << "before t " << t << endl;
    t = t +1;
    cout << "after t " << t << endl;


    long long l = 12345678;
    long m = 13523;
    long long *k = &l;
    cout << "size of l " << sizeof(l) << endl;
    cout << "size of m " << sizeof(m) << endl;
    cout << "size of k " << sizeof(k) << endl;
    return 0;
}