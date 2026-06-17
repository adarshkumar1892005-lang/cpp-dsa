#include <iostream>
using namespace std;

void printArray(int arr[][4], int row, int col)
{
    cout << "printting array : " << endl;
    // row wise
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

bool isPresent(int arr[][4], int row, int col)
{
    int target;
    cout << "enter the no. u want to search: ";
    cin >> target;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void rowwiseSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "sum for row number " << i << " is :" << sum << endl;
    }
}

void colwiseSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << "sum for col number " << i << " is :" << sum << endl;
    }
}

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // first method
    // int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; second method

    // int arr[3][4];
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         cout << "enter the element at row " << row << " and column " << col << " :";
    //         cin >> arr[row][col];
    //     }

    // } // row wise initialisation

    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cout << "enter the element at row " << row << " and column " << col << " :";
    //         cin >> arr[row][col];
    //     }
    // } method 3

    printArray(arr, 3, 4);
    if (isPresent(arr, 3, 4))
    {
        cout << "element found " << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    rowwiseSum(arr, 3, 4);
    colwiseSum(arr,3,4);
    return 0;
}