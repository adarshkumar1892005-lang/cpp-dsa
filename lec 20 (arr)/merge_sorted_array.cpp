#include <iostream>
using namespace std;
/*
1 3 5 7 9 
2 4 6 8 

1                   i = 1, k = 1 , j =0 
1 2                 i = 1, k = 2 , j =1
1 2 3               i= 2 , k = 3 , j =1
                        2      4      2
                        3      5      2
                        3      6      3
                        4      7      3

*/

void mergearray(int arr1[], int m , int arr2[], int n , int arr3[])
{
    int k=0, i=0 , j=0;
    while( i < m && j < n && k < m+ n -1)
    {
        if(arr1[i] < arr2[j] ) arr3[k++] = arr1[i++];
        else arr3[k++] = arr2[j++];
    
    }
     while (i == m && j <n )
        {
            arr3[k++] = arr2[j++];
        }
        while(j == n && i < m)
        {
            arr3[k++] = arr1[i++];
        }
}

void print(int arr3[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }cout << endl;
    
}

int main() {
    int arr1[8] = {1,3,5,7,9,11,12,34,};
    int arr2[4] = {2,4,6,8};
    int arr3[12];
    mergearray(arr1, 8, arr2, 4, arr3);
    print(arr3, 12);

    return 0;
}