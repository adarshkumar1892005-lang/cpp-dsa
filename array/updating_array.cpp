#include <iostream>
using namespace std;

void updatearray( int arr[] , int n){
    cout << "entering function" << endl;

    arr[0] = 23;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    
    cout << "exiting function" << endl;
}

int main() {
    int arr[3] = {1,3,4};
    
    cout << "entering main " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    
    updatearray(arr , 3);

    cout << "entering main " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}
