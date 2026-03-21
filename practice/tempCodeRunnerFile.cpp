#include <iostream>
using namespace std;

int sqroot(int x)
{
    if (x == 0 || x == 1)
        return x;
    int s = 0, e = x;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int sq = mid * mid;
        if (mid > x / mid)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}

double precise(int x, int ans, int precision)
{
    double factor = 1;
    double precis_ans = ans;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10.0;
    }
    if (precis_ans < x/ precis_ans)
    {
        while (precis_ans<= x /precis_ans)
        {
            precis_ans += factor;
        }
        
    }
    
    return precis_ans;
}

int main()
{
    int x;
    cout << "number is : ";
    cin >> x;
    int ans = sqroot(x);
    cout << "square root of " << x << " is :" << sqroot(x) << endl;
    cout << "square root of " << x << " is :" << precise(x, ans, 3) << " more precisely\n";

    return 0;
}