#include <iostream>
using namespace std;

int fin_pivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        
        
        if (arr[mid] >= arr[0])
        {
            s = mid +1;
        }
        else 
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    int arr[5] = {3,8,10,17,1};
    cout << "the index of pivot element is " << fin_pivot(arr, 5);

    return 0;
}