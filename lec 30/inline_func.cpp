#include <iostream>
#define __
using namespace std;

/* inline func doesn't call the func instead it replaces body to where it is called .
    hence no copy or func call takes place.
    but it needs to be 2 or 3 atmost lines in body , also inline is a precompiler request so if body not 
        suitable for inline it will just run without inline without error or warning.*/
inline int getMax(int a, int b)
{
    return (a>b) ? a:b;
}



int main() {
    int a=0,b=1;
    cout << "before \n";
    int ans = getMax(a,b);
    cout << "maximum is :" << ans << endl;
    a = a+3;
    b = b++;
    cout << "after \n";
    ans = getMax(a,b);
    cout << "maximum is :" << ans << endl;

    cout << endl;


    return 0;
}