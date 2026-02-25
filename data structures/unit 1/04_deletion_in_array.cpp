#include <iostream>
using namespace std;

void deleteAt(int arr[], int &size, int pos)
{
    

    if (pos <= 0 || pos > size )
    {
        cout << "this position can't be used!" << endl;
            }
    else
    {

        for (int i = pos - 1; i < size - 1; i++)
        {

            arr[i] = arr[i + 1];
        }
        size--;
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}
int main()
{
    int arr[50], size, pos;
    cout << "enter no. of terms in array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter elements of array at index " << i << " : ";
        cin >> arr[i];
    }
    cout << "given array is :- " << endl;
    printarray(arr, size );
    cout << "enter the position where you want to delete: " << endl;
    cin >> pos;
    deleteAt(arr, size, pos);
    cout << "array after deletion is :-" << endl;
    printarray(arr, size);

    return 0;
}