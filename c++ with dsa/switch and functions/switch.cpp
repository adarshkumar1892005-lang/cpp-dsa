#include <iostream>
using namespace std;

int main()
{
    int num = 8;

    cout << endl;
    switch (num)
    {
    case 1:
        cout << "first" << endl;
        break;

    case 2:
        cout << "second" << endl;

    case 3:
        cout << "three " << endl;
    default:
        cout << "this is default feature" << endl;
        break;
    }
    return 0;
}