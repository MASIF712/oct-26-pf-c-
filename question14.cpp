#include <iostream>
using namespace std;
int power(int base, int exponent)
{
    int mantisa = 1;
    for (int i = 1; i <= exponent; i++)
    {
        mantisa *= base;
    }
    return mantisa;
}
int main()
{
    int base, exp;
    cout << "Enter a base and exponent: ";
    cin >> base >> exp;
    cout << base << " power " << exp << " is: " << power(base, exp) << endl;
    return 0;
}