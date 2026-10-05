#include <iostream>
using namespace std;

int sum =0;
int getsum(int arr[], int n)
{
    // base case
    if(n==0 ) return 0;

    if(n==1) return arr[0];

    // recursive relation
    int remaning = getsum(arr +1 , n -1);
    
    // processing
    int ans = arr[0] + remaning;

    return ans;
}

int main() {
    int arr[4] = {2,4,6,3};
    int ans = getsum(arr, 4);
    cout << "answer is " << ans << endl;
    return 0;
}