#include <iostream>
using namespace std;

//    *
//   **
//  ***
// ****
// if n=4 

int main() {
    int n;
    cin >>n;

    int row =1;
    while (row <=n)
    {
        int space = n- row;
        while (space)
        {
            cout << " ";
            space--;

        }
        int col =1;
        while (col<=row )
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
        
        
    }
    
    return 0;
}