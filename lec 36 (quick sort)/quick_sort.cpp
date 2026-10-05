#include <iostream>
using namespace std;

int partition(int *arr, int s , int e)
{
    int sum =0;
    for (int i = s+1; i <=  e; i++)
    {
        if(arr[s] > arr[i]) sum++;
    }
    int p = s + sum;
    swap(arr[s],arr[p]);
    int i=s,j=e;
    while (i<p && j > p)    
    {
        while(arr[i] < arr[p]) i++;
        while(arr[j] > arr[p]) j--;
        if(i<p && j>p)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return p;
}

void quick_sort(int *arr, int s , int e)
{
    //base case
    if(s>=e) return;
    
    int pivot_index = partition(arr,s,e);

    //left part
    quick_sort(arr,s,pivot_index-1);
    //right part
    quick_sort(arr,pivot_index+1,e);
}

int main() {
    int arr[5] = {7,6,5,4,3};
    int n = 5;
    quick_sort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
    return 0;
}