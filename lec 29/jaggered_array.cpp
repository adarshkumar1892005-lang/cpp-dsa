#include <iostream>
using namespace std;

int main()
{
    int row;
    int col;
    cout << "enter the no. of rows in matrix :";
    cin >> row;
    int *p = new int[row];
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        cout << "enter the no. of columns in row no. " << i << " :";
        cin >> col;
        p[i] = col;
        arr[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cout << "enter the elt at row " << i << " and column " << j << " : ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < p[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] p;

    return 0;
}