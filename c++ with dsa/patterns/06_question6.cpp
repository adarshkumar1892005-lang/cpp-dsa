#include <iostream>
using namespace std;

//1
// 22
// 333
// 4444
//for n =4

int main() {
    int n;
    cout << "enter value of n";
    cin >> n;
    int i =1;
    while (i<=n)
    {
        int j=1;
        int value = i;
        while (j<=i)
        {
            cout << value ;
            value++;
            j++;
        }
        cout << endl;
        i++;
        
    }
    
    return 0;
}