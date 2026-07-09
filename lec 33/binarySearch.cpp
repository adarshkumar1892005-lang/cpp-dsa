#include <iostream>
using namespace std;

void print(int arr[], int s , int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}

bool BinarySearch(int arr[], int s , int e , int k)
{
    print(arr, s,e);
    // base codition
    if(s>e) return false;

    // first case
    int mid = s + (e-s)/2;
    cout << "mid is " << arr[mid] << " and key is " << k <<endl <<  endl;
    if(arr[mid] == k) return true;

    // recursive relation
    if(arr[mid] > k ) 
    {
        return BinarySearch(arr,s,mid-1,k) ;
    }
    else 
    {
        return BinarySearch(arr,mid+1,e,k);
    }
}

int main() {
    int arr[6] = {1,2,5,6,7,21};
    int s =0,n = 6, e = n-1;
    int key = 11;
    if(BinarySearch(arr,s,e,key)) cout << " element found \n";
    else cout << "element not found \n";
    return 0;
}