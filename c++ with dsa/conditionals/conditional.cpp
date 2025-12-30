#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    if (a == 9)
    {
        cout << "NINE" << endl;
    }
    if (a > 0)
    {
        cout << "POSITIVE" << endl;
    }
    else
    {
        cout << "NEGATIVE" << endl;
    }

    char ch;
    cout << "Enter a lowercase or uppercase or numberic value" << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is uppercase" << endl;
    }
    else if (ch >= 0 && ch <= 9)
    {
        cout << "This is numeric" << endl;
    }
    else
    {
        cout << "enter some valid input" << endl;
    }

    return 0;
}