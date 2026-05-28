#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid)
{
    int cowcount = 1;
    int lastpos = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastpos >= mid)
        {
            cowcount++;
            if (cowcount >= k)
            {
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}

int distanc(int arr[], int k, int n)
{
    int s = 1;
    int maxi = 0;
    int ans = -1;
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = arr[n-1]- arr[0];
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n , k , mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {4, 2, 1, 3, 6};
    int k;
    cout << "find largest distance betweeen aggressvi cows with no. of cows: " << endl;
    cin >> k;
    cout << "largest distance is :" << distanc(arr, k ,5);

    return 0;
}