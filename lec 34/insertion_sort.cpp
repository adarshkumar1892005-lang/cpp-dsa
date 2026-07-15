#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }cout << endl;
}

void insertion_sort(int arr[], int n,int i)
{
    cout << "array received \n";
    printarray(arr,n);
    //base case
    if(i>=n) return;

    //first case
    int j= i-1;
    int temp = arr[i];
    for(; j>=0 ; j--)
    {
        if(temp < arr[j]) 
        {
            arr[j+1] = arr[j];
        }
        else break;
    }
    arr[j+1] = temp;

    //recursive call
    insertion_sort(arr,n,i+1);
}

int main() {
    int arr[6] = {7,4,1,0,-1,-2};
    insertion_sort(arr,6,1);
    cout << "after sorting \n";
    printarray(arr,6);
    
    return 0;
}