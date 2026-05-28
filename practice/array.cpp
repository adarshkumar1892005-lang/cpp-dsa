#include <iostream>
using namespace std;

int main() {
    int pos,value,n=5;
    int arr[10] = {1,2,3,4,5};
    cout << "array is :-\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;
    // insert 99 at 3 
    pos = 3, value = 99;
    for (int i = n-1; i >=pos; i--)
    {
        arr[i +1] = arr[i];
    }
    arr[pos] = value;
    n++;

    cout << "after insertion \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;
    
    
    

    
    return 0;
}