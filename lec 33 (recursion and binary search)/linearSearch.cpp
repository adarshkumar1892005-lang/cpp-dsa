#include <iostream>
using namespace std;

bool isPresent(int arr[], int n , int t)
{
    if(n==0) return false;
    if(arr[0] == t ) return true;

    else 
    {
        bool remaning = isPresent(arr+1,n-1,t);
        return remaning;
    }
}

int main() {
    int arr[6] = {2,4,6,9,56,34};
    int target = 6;
    if(isPresent(arr,6,target)) cout << "element found \n";
    else cout << "element not found \n";
    return 0;
}