#include <iostream>
#include <cmath>
using namespace std;

// taking power

int main()
{
    int a, b;
    cout << "enter value of a: ";
    cin >> a;
    cout << "enter value of b: ";
    cin >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "answer is =" << ans << endl;

// easy way
    int answer = pow(a,b);
    cout << answer;

    return 0;
}