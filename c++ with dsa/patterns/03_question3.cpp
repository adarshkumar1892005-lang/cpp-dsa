#include <iostream>
using namespace std;

// 1 2 3
// 4 5 6
// 7 8 9
// for n =3


int main() {
    int n;
    cout << "enter value of n: ";
    cin >> n;
    int count = 1;
    int i =1;
    while (i<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout << count << " ";
            j = j+1;
            count +=1;
        }
        cout << endl;
        i++;
        
    }
    
    return 0;
}