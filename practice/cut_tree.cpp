#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int M, int mid)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            total += arr[i] - mid; 
        }
        
        
    }
    return M <= total;
}

int height(int arr[], int n, int M)
{
    int s = 0, e = arr[0], ans = -1;
    for (int i = 0; i < n; i++)
    {
        e = max(arr[i], e);
    }
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if(isPossible (arr, n, M, mid))
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
    int arr[5] = {2, 3, 6, 2, 4};
    cout << "length of machine: " << height(arr, 5, 4) << endl;
    return 0;
}