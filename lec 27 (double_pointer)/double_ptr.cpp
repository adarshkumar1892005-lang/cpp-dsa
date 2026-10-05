#include <iostream>
using namespace std;

void Update(int **p2)
{
    // p2 = p2 +1; // will not change anything

    // *p2 = *p2 +1; // will change address of i

    **p2 = **p2 +1; // will change i
}

int main() {
    int i=4;
    int *p = &i;
    int **p2 = &p;
    
    cout << "before " << i <<endl;
    cout << "before " << p <<endl;
    cout << "before " << p2 <<endl;
    
    Update(p2);

    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;
    return 0;
}