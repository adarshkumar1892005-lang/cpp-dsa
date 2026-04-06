#include <iostream>
using namespace std;

void sortarray(int arr[], int n) // with selection sort
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
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

void arraysort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

int main()
{
    int arr[5] = {64, 25, 12, 22, 11};
    cout << "the given array is :-\n";
    printarray(arr, 5);
    
    cout << "from bubble sorting \n";
    arraysort(arr, 5);
    printarray(arr, 5);


    cout << "from selection sorting \n";
    sortarray(arr, 5);
    printarray(arr, 5);
    return 0;
}