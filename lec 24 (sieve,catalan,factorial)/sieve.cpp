#include <iostream>
#include <vector>
using namespace std;

void sieve(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = 0;
    int arr[n];
    int k=0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            arr[k++] = i;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}

int main()
{
    int n = 400;
    sieve(n);
    return 0;
}