#include <iostream>
using namespace std;
long long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
lebel:
    cout << "Enter a number: ";
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << " you entered negative number please positive number ";
        goto lebel;
    }
    cout << "Factorial of " << n << " is  : " << factorial(n) << endl;
    return 0;
}