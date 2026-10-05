#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/*
100
sqrt = 10
prime till sqrt = 2,3,5,7
for 10-20

*/

vector<long long> sieve(long long n)
{
    vector<bool> mark(n + 1, true);
    vector <long long> prime;
    for (int i = 2; i < n; i++)
    {
        if (mark[i])
        {
            prime.push_back(i);
            for (int j = 2 * i; j <= n; j = j + i)
            {
                mark[j] = 0;
            }
        }
    }
    return prime;
}

void seg_sieve(int l , int h)
{
    long long limit = sqrt(h) +1;
    vector < long long > prime;
    vector <bool > isPrime(h-l+1,true);
    isPrime[0] = isPrime[1] = 0;
    prime = sieve(limit);
    for(long long p : prime)
    {
        long long sm = (l/p)*p;
        if(sm<l) sm+=p;
        if(sm==p) sm+=p;
        for(long long m = sm ; m <= h ; m +=p)
        {
            isPrime[m-l] = 0;
        }
    }
    for (long long i = l; i <= h; i++)
    {
        if(isPrime[i-l]) cout << i << " ";
    } cout << endl;
    
}

int main()
{
    long long n = 10000000;
    seg_sieve(1,n);
    return 0;
}