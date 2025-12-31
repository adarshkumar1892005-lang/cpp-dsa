#include <iostream>
using namespace std;

// 3 2 1
// 3 2 1
// 3 2 1
// for n =3

int main() {
    int n , i ,j;
    cout << "Enter value of n: ";
    cin >> n;
    i =1;
    while (i<=n)
    {
        j =1;
        while (j<=n)
        {
            cout << n-j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}