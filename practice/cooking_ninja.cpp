#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int M, int mid)
{
    int dishes = 0;

    for (int i = 0; i < n; i++)
    {
        int r = arr[i];
        int k = 1;
        int time = 0;
        while (true)
        {
            time += k * r;
            if (time > mid)
                break;
            dishes++;
            k++;
            if (dishes >= M)
                return true;
        }
    }
    return false;
}
int time(int arr[], int n, int M)
{
    int ans = -1;
    int s = 0, sum = (M * (M + 1)) / 2, mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }
    int e = mini * sum;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, M, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << time(arr, 4, 11);
    return 0;
}