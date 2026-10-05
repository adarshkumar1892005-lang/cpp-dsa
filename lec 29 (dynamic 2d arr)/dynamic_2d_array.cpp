#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout << "enter no. of rows in your matrix :";
    cin >> row;
    cout << "enter no. of columns in your matrix :";
    cin >> col;
    int **arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << "enter the elt at row "<< i << " and at col " << j << " : ";
            cin >> arr[i][j];
            
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }cout << endl;
        
    }
    
    
    return 0;
}