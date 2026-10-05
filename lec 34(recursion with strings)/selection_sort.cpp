#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    //base case 
    if(n==1 || n==0) return ;
    //first case
    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] < arr[minIndex]) minIndex = i;
    }
    swap(arr[minIndex],arr[0]);
    // recursive call
    selection_sort(arr + 1 , n-1);
    
}

int main() {
    int arr[7] = {7,6,5,4,3,2,1};

    selection_sort(arr,7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
    return 0;
}