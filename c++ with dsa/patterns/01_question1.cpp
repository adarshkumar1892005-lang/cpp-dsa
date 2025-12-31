#include <iostream>
using namespace std;
//  1 2 3 4
//  1 2 3 4
//  1 2 3 4
//  1 2 3 4
// for n=4

int main() {
    int n,i,j;
    cout << "enter value of n: " ;
    cin >> n;
    i =1;
    while (i<=n)
    {   
        j=1;
        while (j<=n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
        
    }
    
    return 0;
}