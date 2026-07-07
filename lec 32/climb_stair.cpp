#include <iostream>
using namespace std;

int no_of_ways(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    int m = no_of_ways(n-1) + no_of_ways(n-2);
    return m;
}

int main() {
    int n;
    cin >> n;
    int ans = no_of_ways(n);
    cout << ans;
    return 0;
}