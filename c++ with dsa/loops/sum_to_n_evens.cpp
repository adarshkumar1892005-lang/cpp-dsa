#include <iostream>
using namespace std;

int main() {
    int i=1, sum =0, n;
    cout << "enter value of n: " ;
    cin >> n;
    while (i<=n)
    {
        if (i%2 == 0)
        {
            sum +=i;
        }
        i++;
    }
    cout << "sum of even numbers till " << n << " is " << sum << endl;
    
    
    return 0;
}