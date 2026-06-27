#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2*arr[i];
    }
    cout << "array is doubled\n";
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main() {
    int arr[4] = {7,4,9,6};
    // cout << "before \n";
    // printarray(arr, 4);
    // update(arr, 4);
    // cout << "after \n";
    // printarray(arr , 4);
    // cout << endl;

    cout << &arr[0] << endl;
    cout << arr << endl;
    cout << *arr << endl;

    int *p = arr;
    cout << *p <<endl;
    cout << &p <<endl;
    
    cout << endl;
    
    cout << *(p+1)<<endl;
    cout << *(p) +1 <<endl;
    cout << p <<endl;
    cout << &(p) +1 <<endl;
    // cout << &(p+1)<<endl;

    return 0;
}