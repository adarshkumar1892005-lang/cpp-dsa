#include <iostream>
using namespace std;

int binarysearch( int* arr, int size, int key) {
    int start = 0;
    int end = size -1;
    int mid = (start + end)/2;
    
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        
        else if ( arr[mid] < key)
        {
            start = mid +1;
        }
        else if (arr[mid] > key)
        {
            end = mid -1;
        }
        mid = (start + end)/2;
        
        
    }
    return -1;
}

int main() {
    int even[6] = {1,3,4,7,8,9};
    int odd[5] = {12,32,43,74,85};

    int index = binarysearch(even , 6, 9);
    cout << "index of key is = " << index << endl;

    return 0;
}