#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter value of n: ";
    cin >> n;

    int temp =n;
    int mask =0;

    if (n == 0)
    {   
        cout << 1;
        return 0;
    }
    
    for (int i = 0; n!= 0; i++)
    {
        mask = (mask <<1) | 1;
        n = n>>1;
    }
    int result = mask & (~temp);
    cout << result;
    return 0;
}