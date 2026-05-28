#include <iostream>
#include <algorithm>
using namespace std;

/*

*/
void bubble_sort(int arr[], int n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
        }
        
    }
    
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[5] = {1, 3, 2, 6, 4};
    cout << "array is :-" << endl;
    print_array(a, 5);
    bubble_sort(a,5);
    cout << "after sorting :- \n";
    print_array(a, 5);
    return 0;
}