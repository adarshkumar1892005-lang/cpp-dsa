#include <iostream>
using namespace std;

int main()
{
    int n, i = 2, p = 0;
    cout << "enter the value of n: ";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "this is not a prime number as it is divisible by " << i << endl;
            p = 1;
            break;
        }
        
        i++;
    }
    if (p == 0)
    {
        cout << "this is a prime number";
    }

    return 0;
}