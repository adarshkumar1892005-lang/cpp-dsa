#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter value of n: ";
    cin >> n;

    cout << "printing count from 1 to n" <<endl;
    for (int i = 1; i < n+1; i++)
    {
        cout << i << endl;
    }
    // all initialization,condition, and updation can be removed
    cout << endl;
    int i =1;
    for (; ; )
    {
        if (i<=n)
        {
            cout << i << endl;

        }
        else{
            break;
        }
        i++;
    }
    // multiple conditions ,initialisations and updation are also allowed
    for (int i = 0, j =1 ; i < n || j <= n-1; i++, j++)
    {
        cout << i <<" " << j << endl;
    }
    
    
    
    return 0;
}