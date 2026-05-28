#include <iostream>
using namespace std;

bool isprime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            cout << "it is divisible by " << i << endl;
            return 0;
            break;
        }
        
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    if (isprime(n))
    {
        cout << "It is a prime number";
    }
    else{
        cout << "Not a prime number";
    }
    
    return 0;
}