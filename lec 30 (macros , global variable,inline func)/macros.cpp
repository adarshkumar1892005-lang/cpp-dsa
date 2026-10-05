#include <iostream>
using namespace std ;
#define PI 3.14
// macros not always uppercase but we prefer to differentiate btw variables 

int main()
{
    //PI = 20; // will not work
    int r =5;
    int area = PI*r*r;
    cout << "area of the circle is :" << area <<endl;
    return 0;
}