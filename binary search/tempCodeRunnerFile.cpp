#include <iostream>
using namespace std;

bool isPossible(int arr[], int s, int n, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > s || arr[i] > mid)
            {
                return false;
            }
            else
            pagesum = arr[i];
        }
    }
    return true;
}

int bookalloc(int arr[], int s, int n)
{
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0, end = sum;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, s, n, mid))
        {
            ans = mid;
            end = mid -1;
        }
        else
        {
            start = mid +1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {10, 20, 30, 40};
    int s;
    cout << "enter no. of students: ";
    cin >> s;
    cout << "min no. of pages alloted to a student for maximum no. of pages is :" << bookalloc(arr,s,4) <<endl;
    return 0;
}