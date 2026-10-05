#include <iostream>
#include <vector>
using namespace std;

void print(vector <string> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }cout << endl;
    
}

void solve(string s , int index , vector <string> &ans)
{
    if(index >= s.length()) 
    {
        ans.push_back(s);
        return;
    }

    for(int i=index ; i < s.length() ; i++)
    {
        swap(s[index],s[i]);
        solve(s,index+1,ans);
        swap(s[index],s[i]);
    }
}

int main()
{
    string s = "abc";
    cout << "all permutations of strings are \n";
    vector<string> ans;
    solve(s,0,ans);
    print(ans);
    
    return 0;
}

