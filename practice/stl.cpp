#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {
    // int basic[3] = {1,3,4};
    // array<int,4> a = {1,2,3,4};
    // int size = a.size();

    // for (int i = 0; i < size ; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // cout << "element at 2nd index : " << a.at(1) << endl;
    // cout << "empty or not -> " << a.empty() << endl;
    
    // cout << "size of array -> " << a.size() << endl;

    // cout << "first element -> " << a.front() << endl;
    // cout << "last element -> " << a.back() << endl;


    vector<int> v ;
    v.push_back(1);
    cout << "size of vector -> " << v.size() << endl;
    cout << "capacity of vector -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "size of vector -> " << v.size() << endl;
    cout << "capacity of vector -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "size of vector -> " << v.size() << endl;
    cout << "capacity of vector -> " << v.capacity() << endl;
    v.push_back(4);
    cout << "size of vector -> " << v.size() << endl;
    cout << "capacity of vector -> " << v.capacity() << endl;
    v.push_back(5);
    cout << "size of vector -> " << v.size() << endl;
    cout << "capacity of vector -> " << v.capacity() << endl;
    
    cout << "element at 2nd position " << v.at(1) << endl;
    cout << "first element -> " << v.front() << endl;
    cout << "last element -> " << v.back() << endl;

    cout << "is Empty -> " << v.empty() << endl;

    cout <<"before pop \n";
    for(int x : v)
    cout << x << " " ;
    cout << endl;
    v.pop_back();
    cout << "after pop \n";
    for(int x : v)
    cout << x << " " ;
    cout << endl;

    vector<int> a(5,1) ; // assign 1 five times
    cout << "print a" << endl;
    for(int i: a)
    cout << i << " ";
    cout << endl;

    vector<int> last(a);
    cout << "last is :- \n";
    for(int i: last)
    cout << i << " ";
    cout << endl;
    return 0;
}