#include <iostream>
using namespace std;

int power(int m , int n)
{
    //base case 
    if(n==0) return 1;
    if(n==1) return m;
    //firstcase
    int root = power(m,n/2);
    if(n&1) return m*root*root;
    return root*root;
}

int main() {
    int m,n;
    cin >> m >> n;
    int ans = power(m,n);
    cout << ans << endl;
    return 0;
}