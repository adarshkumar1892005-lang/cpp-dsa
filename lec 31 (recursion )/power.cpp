#include <iostream>
using namespace std;

int power(int n , int m)
{
    if(m==0) return 1;
    return power(n,m-1)* n;
}

int main() {
    int n,m;
    cout << "write the no. and power of it :";
    cin >>n >> m;
    int ans = power(n,m);
    cout << n << " to the power " << m << " is :" << ans;
    return 0;
}