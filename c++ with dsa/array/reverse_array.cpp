#include <iostream>
#include <algorithm>
using namespace std;

void reversearray(int arr[], int n)
{

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printarray(arr, 6);
    // reversearray(arr, 6);
    std::reverse(arr, arr + 6);
    printarray(arr, 6);
    return 0;
}