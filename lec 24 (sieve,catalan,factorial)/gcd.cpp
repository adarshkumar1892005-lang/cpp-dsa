#include <iostream>
using namespace std;

int getGCD(int m, int n)
{
    if(m==0) 
    return n;
    if(n==0) 
    return m;
    while(m!=n)
    {
        if(m>n)
        {
            m = m-n;
        }
        else
        {
            n = n-m;
        }
    }
    return m;

}

int main() {
    int m,n;
    cout << "m is " ;
    cin >> m;
    cout << "n is " ;
    cin >> n;
    int ans = getGCD(m,n);
    cout <<"gcd of (m,n) is " << ans << endl;
    return 0;
}