#include <iostream>
#include <algorithm>
using namespace std;

int ans = -1;
int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        
        int m = s + (e - s) / 2;
        if (arr[m] == key)
        {
            ans = m;
            e = m - 1;
        }
        else if (arr[m] > key)
        {
            e = m - 1;
        }
        else if (arr[m] < key)
        {
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[9] = {1, 2, 4, 3, 3, 4, 3, 4, 5};
    sort(arr, arr + 9);
    cout << "the first appearance of key is at index " << firstOcc(arr, 9, 4) << endl;

    return 0;
}