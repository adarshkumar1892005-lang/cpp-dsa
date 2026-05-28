#include <iostream>
using namespace std;

// find unique element given every element appears only twice except one element
int finduniqueelt( int arr[], int n){
    int ans =0;
    for (int i = 0; i < n ; i++)
    {
        ans = ans^arr[i];

    }
    return ans;
    
}

int main() {
    int arr[9] = {2,4,5,6,6,4,5,2,1};
    int a = finduniqueelt( arr , 9);
    cout << "unique element is =" << a << endl;
    
    return 0;
}