#include <iostream>
using namespace std;
int i = 4;
// global variable will change no matter where its called
// better use reference variable
void a()
{
    cout << "in a " << i << endl;
    i++;
}

void b()
{
    cout << "in b " << i << endl;
}
int main()
{
    int j;
    cout << "in main " << i << endl;
    i++;
    a();
    b();
    return 0;
}