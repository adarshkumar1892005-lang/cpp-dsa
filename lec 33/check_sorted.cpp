#include <iostream>
using namespace std;

bool Sorted(int arr[], int size)
{
    // base case 
    if(size <= 1 && size >=0) return true;
    
    //first check
    if(arr[0] > arr[1]) return false;

    //recursive relation
    else
    {
        bool remainingpart = Sorted(arr+1,size-1);
        return remainingpart;
    }
    
    return 0;
}

int main() {
    int arr[5] = {1,4,7,7,8};
    if(Sorted(arr,5)) cout << "array is sorted\n";
    else cout << "array is unsorted\n";

    return 0;
}