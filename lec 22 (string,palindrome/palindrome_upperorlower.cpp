#include <iostream>
using namespace std;

int getlength( char ch[] )
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void uppertolowercase(char ch[])
{
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z') 
        {
            ch[i] = ch[i] - 'A' + 'a';
        }
    }
}

bool isPalindrome(char ch[], int length)
{
    uppertolowercase(ch);
    int s= 0, e = length-1;
    while (s<e)
    {
        if(ch[s++] != ch[e--]) return 0;
    }
    return 1;
}

int main() {
    char ch[100] ;
    cout << "enter a word :";
    cin >> ch;
    int length = getlength(ch);
    cout << "is it a palindrome " << isPalindrome(ch, length) << endl;

    return 0;
}