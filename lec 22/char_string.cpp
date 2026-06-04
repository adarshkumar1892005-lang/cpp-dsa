#include <iostream>
using namespace std;

int getlength( char name[])
{   int count = 0;
    for (int i = 0;  name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}



int main() {
    char c  = 'z'; 
    string s = "hello world" ; // one dimensional character array
    cout << s << c <<endl;
    
    char name[10] ;
    cout << "enter your name :";
    cin >> name;
    name[2] = '\0'; // creating null character at 2nd index

    cout << "your name is :" << name << endl;
    
    cout << "length of string is :" << getlength(name);
    return 0;
} 