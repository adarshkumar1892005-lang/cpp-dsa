#include <iostream>
using namespace std;

int getsum(int arr[] , int n)
{
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // int *p = new int[8];
    // for (int i = 0; i < 8; i++)
    // {
    //     int n;
    //     cout << "enter elt at index " << i << " :";
    //     cin >> n;
    //     p[i] = n;
    // }
    // cout << "array is given by \n";
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << p[i] << " ";
    // }cout << endl;
    int n;
    cout << "enter the no. of elt u want in your array :\n";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value at index " << i << " :";
        cin >> arr[i];
    }
    int ans = getsum(arr, n);
    cout << "The sum of the array is :" << ans  <<endl;
    
    delete []arr; // fried dynamic memory alloted;
    arr = nullptr; // for avoiding dangling ptr
    return 0;
}