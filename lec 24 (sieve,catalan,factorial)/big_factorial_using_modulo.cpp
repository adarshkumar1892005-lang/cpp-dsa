#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;
    long long mod = 1e9 +7;
    for (int i = 2; i <= n; i++)
    {
        fact = (fact*i)%mod;
    }
    
    return fact;
}

int main() {
    int n ;
    cout << "enter the value of n :";
    cin >> n;
    long long ans = factorial(n);
    cout << ans;
    return 0;
}