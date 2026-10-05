#include <iostream>
using namespace std;

bool searchElt(int arr[][4] , int row , int col, int target)
{
    int s = 0 , e = row*col -1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        mid = s + (e-s)/2;
        int element = arr[mid/col][mid%col];
        if(element == target) 
        {
            cout << "element found at row :" << mid/col << " and col :" << mid%col <<endl;
            return 1;

        }
        else if(element>target) e = mid-1;
        else if(element < target) s = mid+1;
    }
    cout << "element not found\n";
    return 0;
    
}

int main() {
    int arr[3][4] = {1,3,5,6,8,9,12,23,34,56,78,89};
    int elt = 18;
    searchElt(arr, 3,4, elt);
    return 0;
}