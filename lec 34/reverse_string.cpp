#include <iostream>
using namespace std;

void reverse(string& str, int j)
{
    cout << "string received here -" << str << endl;
    int i = str.length()-j-1;
    //base case
    if(i>j) return;

    // processing
    swap(str[i],str[j--]);

    //recursive call
    reverse(str,j);
}

int main() {
    string name = "hello world";
    cout<<"before-" << name << endl;
    reverse(name,name.length()-1);
    cout << "after -" << name << endl;
    return 0;
}