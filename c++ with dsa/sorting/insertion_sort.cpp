#include <iostream>
using namespace std;

void sortarray(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (;j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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
    int arr[5] = {14,55,47,68,19};
    cout <<" Array is :- \n";
    printarray(arr, 5);

    sortarray(arr, 5);
    cout << "after insertion:- \n";
    printarray(arr, 5);
    

    return 0;
}