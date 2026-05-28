#include <iostream>
#include <cmath>
using namespace std;

// method 2

int main() {
    int n;
    cout << "enter value of n: ";
    cin >> n;

    int ans = 0;
    for (int i = 0; n!=0 ; i++)
    {
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
    }
    cout << ans;
    return 0;
}