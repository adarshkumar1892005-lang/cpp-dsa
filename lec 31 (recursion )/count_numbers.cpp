#include <iostream>
using namespace std;

// for reverse counting tail recursion
void num2(int n)
{
    if(n==0) return;
    cout << n << " ";
    num2(n-1);
}


// for normal counting head recursion
void num1(int n)
{
    if(n==0) return;
    num1(n-1);
    cout << n << " ";
}
int main() {
    int n;
    cin >> n;
    num1(n);
    cout<< " for num1" <<endl;
    num2(n);
    cout<< " for num2" <<endl;
    return 0;
}