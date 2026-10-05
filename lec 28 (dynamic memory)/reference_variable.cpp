#include <iostream>
using namespace std;

int update(int &n)
{
    n++;
    return n;
}

// int& update2(int n)
// {
//     int& i = n;
//     i++;                 NOT A GOOD PRACTICE
//     return i;
// }

int main() {
    int i=0;
    // int& j = i;
    // i++;
    // j++;
    // cout << i << endl;
    // cout << j << endl;
    cout << i << " before update\n";
    int ans = update(i);
    cout << ans << " after update\n";
    return 0;
}