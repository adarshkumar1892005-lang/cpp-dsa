#include <iostream>
using namespace std;

//find duplicates in array leetcode problem

int findduplicates(int arr[], int n){
    int ans =0;

    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans = ans^i;
    }
    return ans;
}

int main() {
    int arr[9] = {1,2,3,4,5,6,7,8,4};
    int a = findduplicates(arr, 9);
    cout << "duplicate is =" << a << endl;
    return 0;
}