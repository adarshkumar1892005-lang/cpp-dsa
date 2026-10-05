#include <iostream>
using namespace std;
// default arguments are passed to make function more versatile and clean

void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}


int main() {
    int arr[5] = {1,3,5,6,8};
    cout << "start at index 2 (default 0)\n";
    print(arr, 5, 2);
    cout << "start at default(0)\n";
    print(arr,5);
    
    return 0;
}