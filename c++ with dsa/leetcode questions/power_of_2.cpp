#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter value of n: ";
    cin >> n;

    int yes =1;
    int ans =1;

    if (n<=0)
    {
        cout << "false";
    }
    
    while ( ans < INT_MAX/2 )
    {
        
            
            
            ans = ans*2;
            if (ans == n)
            {
                cout << "true";
                yes =0;
                break;
            }
                  
    }
    if (yes)
    {
        cout << "false";
    }
    
    
    return 0;
}