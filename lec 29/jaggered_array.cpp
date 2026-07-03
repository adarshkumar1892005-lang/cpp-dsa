#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return 0;
    else if (x == 0)
        return 1;
    int i = 10;
    int j = 0;
    int arr[15];
    for (int i = 0; i < 10 && x != 0; i++)
    {
        arr[j++] = x % 10;
        x /= 10;
    }

    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }

    int *left = &arr[0];
    int *right = &arr[j];
    while (left < right)
    {
        if (*left != *right)
            return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    // int row;
    // int col;
    // cout << "enter the no. of rows in matrix :";
    // cin >> row;
    // int *p = new int[row];
    // int **arr = new int *[row];
    // for (int i = 0; i < row; i++)
    // {
    //     cout << "enter the no. of columns in row no. " << i << " :";
    //     cin >> col;
    //     p[i] = col;
    //     arr[i] = new int[col];
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << "enter the elt at row " << i << " and column " << j << " : ";
    //         cin >> arr[i][j];
    //     }
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < p[i]; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }cout << endl;

    // }
    // for (int i = 0; i < row; i++)
    // {
    //     delete []arr[i];
    // }
    // delete []arr;
    // delete []p;
    int x = 121;
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    int *left = &arr[0];
    int *right = &arr[2];
    while (left < right)
    {
        if(*left != *right) cout << "false";
        left++;
        right--;
    }
    cout << "true";
    
    
    

    return 0;
}