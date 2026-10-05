#include <iostream>
using namespace std;

int getlength( char name[])
{   int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}

void reverse_string(char c[],int length)
{
    int s=0, e = length -1;
    while (s<e)
    {
        swap(c[s++],c[e--]);
    }

}

int main() {
    char c[20] = "Adarsh";
    int length = getlength(c);
    reverse_string(c,length);
    cout << "name is :" << c;
    return 0;
}