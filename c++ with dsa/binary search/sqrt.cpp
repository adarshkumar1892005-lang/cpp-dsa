#include <iostream>
using namespace std;

int squareroot(int x)
{
    if (x == 0 || x == 1)
        return x;
    int s = 0;
    int e = x;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int sq = mid * mid;
        if (sq > x)
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

double getprecis(int x, int ans, int precision)
{
    double factor = 1;
    double tempsol = ans;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
    }
    while ( (tempsol + factor)* (tempsol + factor) <= x )
    {
        tempsol = tempsol + factor;
    }
    
    return tempsol;
}

int main()
{
    int x;
    cout << "enter the number: ";
    cin >> x;
    int ans = squareroot(x);
    
    cout << "sqaure root is : " << getprecis(x,ans,3) << endl;
    return 0;
}