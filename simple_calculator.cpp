#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = a + b;
    int diff;
    float division;
    int multiply = a * b;

    
    if (a > b)
    {
        diff = a - b;
        cout << "difference =" << diff << "\n";
    }
    else
    {
        diff = b - a;
        cout << "difference =" << diff << "\n";
    }
    
    cout << "sum =" << sum << "\n";
    cout << "multiple = " << multiply << "\n";

    if (b != 0)
    {
        division = static_cast<float>(a) / b;
        cout << "division =" << division << "\n";
    }
    else
    {
        cout << "division not possible" << "\n";
    }

    return 0;
}