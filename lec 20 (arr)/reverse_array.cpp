#include <iostream>
#include <vector>
using namespace std;

void reverse( vector <int> &v )
{
    int s=0, e = v.size() -1;
    while (s<e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    
}

void print(vector <int> v , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] <<  " ";
    }cout << endl;
    
}

int main() {
    vector <int> v;
    v.push_back(11);
    v.push_back(9);
    v.push_back(3);
    v.push_back(2);
    v.push_back(12);

    reverse(v);
    print(v,5);
    
    return 0;
}