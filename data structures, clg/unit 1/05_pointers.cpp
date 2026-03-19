#include <iostream>
using namespace std;

int main() {
    // int a[] ={20,23,24,35};
    // int *p;
    // p = a; // for array a = &a
    // cout << a << endl;
    // cout << *p << endl;
    // cout << p << endl;
    // cout << &a << endl;
    // p++;
    // cout << p << endl;
    // int *p1;
    // // p1 = a[1]; not valid
    // cout << *(a+1) << endl; // *(i+a) = i[a]
    // cout << (p+1) << endl;
    int a[5], i;
    int *q = a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "the array is : " << endl;
    cout <<"index" << "  |  " <<"values" << "  |  " << "addresses" << endl;  
    for (int i = 0; i < 5; i++)
    {
        
        cout << i << "  |  " << a[i] << "  |  " << (q+i) << endl; 
    }
    
    
    return 0;
}