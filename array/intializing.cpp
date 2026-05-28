#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    // cout will give garbage value since not initialized
    cout << "value at index 4: " << numbers[3] << endl;

    int second[3] = {1,4,6};
    cout << "value at index 2: " << second[1] << endl;

    int arr[13] = {1,2,3};
    for (int i = 0; i < 13; i++)
    {
        cout << "value at index: " << i+1 << " is  "<< arr[i] << endl;
    }
    
    return 0;
}