#include <iostream>
#include <cmath>
using namespace std;

// method 1

int main() {
        int n;
        cout << "enter value of n: ";
        cin >> n;
        
        int ans =0;
        for (int i = 0; n!=0; i++)
        {
            int digit = n%2;
            ans = ans + digit * pow(10,i);
            n /=2;
        }
        cout << ans ;
        
    return 0;
}