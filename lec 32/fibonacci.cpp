#include <iostream>
using namespace std;

int fibonacci(int n)
{
    // base condition
    if(n<=1) 
    {
        return n;
    }
    // recursive relation
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}

int main() {
    int n;
    cin >>n;
    int ans = fibonacci(n);
    cout << "ans is " << ans << endl;
    return 0;
}