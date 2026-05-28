#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << "printing array:- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl
         << endl;
}

int getMax(int arr[], int n)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n)
{

    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        // same as if statement used for max
    }
    return mini;
}

int main()
{
    int first[4] = {1, 2, 4, 5};
    printarray(first, 4);
    int maxoffirst = getMax(first, 4);
    cout << "max of first is :" << maxoffirst << endl;

    int second[10] = {1};
    printarray(second, 10);
    int minofsecond = getMax(second, 10);
    cout << "min of second is :" << minofsecond << endl;
    return 0;
}