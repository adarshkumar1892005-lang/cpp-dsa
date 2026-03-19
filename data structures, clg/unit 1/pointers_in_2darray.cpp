#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *p;
    p = a[0];
    cout << (uintptr_t)a << endl; // ptr for row 1
    cout << (uintptr_t)( a + 1) << endl; // ptr for row 2
    cout << (uintptr_t) (*(a+1)+1) << endl ;
    cout << (uintptr_t) (*(a+1)+2) << endl ;
    cout << (uintptr_t)( a + 2) << endl; // ptr for row 3
    
    
    return 0;
}