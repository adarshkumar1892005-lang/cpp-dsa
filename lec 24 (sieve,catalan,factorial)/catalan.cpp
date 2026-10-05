#include <iostream>
using namespace std;

// catalan nubmer series = (2n)!/(n+1)!n!


long long factorial(long long n)
{
    if(n==0 || n==1) return 1;
    else return factorial(n-1)*n;
}

void catalan(long long n)
{
    for (long long i = 0; i < n; i++)
    {
        cout << (factorial(2*i))/((factorial(i+1))*(factorial(i))) << " ";
    }cout << endl;
}

int main() {
    long long n = 10;
    catalan(n);
    return 0;
}