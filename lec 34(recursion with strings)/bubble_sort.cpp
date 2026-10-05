#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    //base case
    if(n<=1) return;
    // first case
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1 ])
            swap(arr[i],arr[i+1]);
    }
    n--;
    // recursive call
    bubbleSort(arr, n);
    
}

int main() {
    int arr[5] = {9,8,7,4,2};
    bubbleSort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }cout <<endl;
    

    return 0;
}