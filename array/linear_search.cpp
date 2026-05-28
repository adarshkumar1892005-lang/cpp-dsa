#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {1, 4, 5, 3, 6, 3, 6, 4};
    int key;
    cout << "enter the key: ";
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }

    return 0;
}