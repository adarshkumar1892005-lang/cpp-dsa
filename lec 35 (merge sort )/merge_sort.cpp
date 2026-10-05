#include <iostream>
using namespace std;

void merge(int *arr , int s , int e)
{
    int mid = s + (e-s)/2;
    int temp[e+1];
    for (int i = s; i <= e; i++)
    {
        temp[i] = arr[i];
    }

    int i=s,j=mid+1,index = s;
    while(i <= mid  && j <= e)
    {
        if(temp[i] < temp[j]) arr[index++] = temp[i++];
        else arr[index++] = temp[j++];
    }
    while(i <= mid) 
    {
        arr[index++] = temp[i++];
    }
    
}

void merge_sort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    // for left part
    merge_sort(arr, s, mid);
    // for right part
    merge_sort(arr, mid + 1, e);
    // merge
    merge(arr, s, e);
}

int main()
{
    int arr[6] = {83, 8, 34, 9, 10, 48};
    int n = 6;
    merge_sort(arr, 0, n-1);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
    return 0;
}