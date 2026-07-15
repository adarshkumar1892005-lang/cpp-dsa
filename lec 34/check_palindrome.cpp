#include <iostream>
using namespace std;

bool CheckPalindrome(string& name , int i , int j)
{
    //base case
    if(i>j) return true;
    //first case
    if(name[i] != name[j]) return false;
    //recursive call
    CheckPalindrome(name,++i,--j);
    return true;
}

int main() {
    string name = "abccba";
    if(CheckPalindrome(name,0,name.length()-1))
        cout << "yes it is a palindrome \n";
    else cout << "no it is not a palindrome \n";
    return 0;
}