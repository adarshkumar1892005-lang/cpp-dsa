#include <iostream>
using namespace std;

bool isEven(int a)
{
    if (a % 2 == 0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << "odd number";
    }
    else
    {
        cout << "even number";
    }

    return 0;
}