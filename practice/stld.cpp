#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    // map<int,string> m;

    // m[1] = "adarsh";
    // m[2] = "kumar";
    // m[13] = "gupta";

    // m.insert( {5,"bheem"});

    // for(auto i:m) {
    //     cout << i.first << " " << i.second << endl;
    // }

    // cout << "finding 13 :" << m.count(13) << endl;
    // m.erase(13);
    // cout << endl << "after erase " << endl;
    // for(auto i:m) {
    //     cout << i.first << " " << i.second << endl;
    // }

    // auto it = m.find(5);
    // for (auto i = it; i != m.end(); i++)
    // {
    //     cout << (*i).first << endl;
    // }
    
    // return 0;
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << binary_search(v.begin(),v.end(),6) << endl;

    cout << "lower_bound" << lower_bound(v.begin(),v.end(),6) - v.begin() << endl;
    cout<< "upper bound " << upper_bound(v.begin(),v.end(),6) - v.begin() << endl;

    int a=0,b=5;
    cout <<" max ->" << max(a,b) << endl;
    cout <<" min ->" << min(a,b);
    swap(a,b);
    cout << endl << "after swaping " <<"a->" << a <<endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate " << endl;
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(),v.end());
    cout << "after sorting :- \n";
    for (int i:v)
    {
        cout << i << " ";
    }cout << endl;

    reverse(v.begin(), v.end());
    cout << " after reverse \n";
    for (int i:v)
    {
        cout << i << " ";
    }
    
    return 0;
}