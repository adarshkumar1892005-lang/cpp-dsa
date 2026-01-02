#include <iostream>
using namespace std;

//    1
//   121
//  12321
// 1234321
// if n =4

int main() {
    int n;
    cin >> n;

    int row =1;
    while (row <=n)
    {
        // print space
        int space = n-row;
        while (space)
        {
            cout << " ";
            space--;
        }
        

        //print first triangle
        int j =1;
        while (j<=row)
        {
            cout << j;
            j++;
        }
        

        // pring second triangle
        int start = row-1;
        while (start)
        {
            cout << start;
            start--;
        }
        


        cout << endl;
        row++;
    }
    
    return 0;
}