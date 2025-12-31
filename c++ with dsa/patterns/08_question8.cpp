#include <iostream>
using namespace std;

// A A A
// B B B
// C C C 
// IF N =3

int main() {
    int n;
    cin >> n;
    
    int row =1;
    while (row <=n)
    {
        int col =1;
        while (col<=n)
        {   char ch = 'A' + row -1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
        
    }
    
    return 0;
}