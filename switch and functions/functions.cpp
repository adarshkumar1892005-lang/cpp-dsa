#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;

    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << power(a, b)<< endl;
    cout << power(5, 3)<< endl;
    cout << power(3, 9)<< endl;
    return 0;
}