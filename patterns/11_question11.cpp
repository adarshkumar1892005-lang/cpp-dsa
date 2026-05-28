#include <iostream>
using namespace std;

// A B C D E 
// B C D E F
// C D E F G
// D E F G H
// E F G H I
// if n=5

int main() {
    int n;
    cin >> n;

    int i =1,j ;
    while (i<=n)
    {
        j= 1;
        while (j<=n)
        {
            char ch = 'A' +i +j -2;
            cout << ch << " ";

            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}