#include <iostream>
#include <algorithm>
using namespace std;

/*
5 2 4 3 1    i =1 , j= 0



*/
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >=0 ; j--)
        {
            if(arr[j] > temp) arr[j+1] = arr[j];
            else break;
        }
        arr[j+1] = temp;
        
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
    insertion_sort(a,5);
    cout << "after sorting :- \n";
    print_array(a, 5);
    return 0;
}