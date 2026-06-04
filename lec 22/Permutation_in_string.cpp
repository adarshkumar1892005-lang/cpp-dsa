#include <iostream>
using namespace std;

bool isEqual(int a[], int b[])
    {
        for(int i=0 ; i < 26 ; i++)
        {
            if(a[i] != b[i]) return 0;
        }
        return 1;
    }

bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        int index =0;
        for(int i=0 ; i<s1.length() ; i++)
        {
            index = s1[i] - 'a';
            count1[index]++;
        }

        int count2[26] = {0};
        int windowsize = s1.length();
        int i=0;
        while(i < windowsize && i < s2.length())
        {
            index = s2[i] - 'a';
            i++;
            count2[index]++;
        }
        if(isEqual(count1,count2)) return 1;
        while(i < s2.length())
        {
            char newchar = s2[i];
            char oldchar = s2[i-s1.length()];
            count2[oldchar - 'a']--;
            count2[newchar - 'a']++;
            i++;
            if(isEqual(count1,count2)) return 1;
        }
        return 0;
    }

int main() {
    string s2 = "aedbaeoa";
    string s1 = "ab";
    cout << checkInclusion(s1,s2);
    
    return 0;
}