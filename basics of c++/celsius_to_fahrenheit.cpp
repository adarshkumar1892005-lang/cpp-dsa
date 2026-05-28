#include <iostream>
using namespace std;

int main()
{
    float celsius;
    cout << "Enter temperature in celsius: ";
    cin >> celsius;
    float fahrenheit = (9.0f / 5.0f * (celsius)) + 32.0f;
    cout << "temperature in fahrenheit scale is " << fahrenheit << endl;
    return 0;
}