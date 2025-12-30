#include <iostream>
using namespace std;

int main() {
    int i=1, sum =0,n;
    cout << "Enter value of n: ";
    cin >> n;
    while (i<=n)
    {
        sum +=i;
        i++;
    }
    cout << "sum to n is =" << sum <<endl;


    return 0;
}