#include <iostream>
using namespace std;

// hello
char geMaxOccChar(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            arr[s[i] - 'a']++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            arr[s[i] - 'A']++;
        }
    }
    int maxi = -1,n=0 ;
    for (int i = 0; i < 26; i++)
    {   
        if (maxi < arr[i]){
            n = i;
            maxi = arr[i];
        }
    }
    return 'a' + n;
}

int main()
{
    string s;
    cout << "write a word :";
    cin >> s;
    char ans = geMaxOccChar(s);
    cout << "maximum occuring character is :" << ans << endl;
    return 0;
}