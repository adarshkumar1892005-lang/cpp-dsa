#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0) return 1;
    int smaller_problem = fibonacci(n-1);
    int bigger_problem = n * smaller_problem;
    return bigger_problem;
}

int main() {
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans;
    return 0;
}