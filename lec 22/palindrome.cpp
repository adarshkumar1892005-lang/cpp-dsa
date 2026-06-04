#include <iostream>
using namespace std;

bool ifpalindrome(char c[], int length )
{
    int s= 0, e = length-1;
    while (s<=e)
    {
        if(c[s] != c[e])
        {
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}

int getlength(char name[] )
{   int count = 0;
    for (int i = 0;  name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}

int main() {
    char word[20];
    cout << "try writing an plaindrome: ";
    cin >> word;
    int length = getlength(word);
    cout << "palaindrom or not :" << ifpalindrome(word,length) << endl;


    return 0;
}