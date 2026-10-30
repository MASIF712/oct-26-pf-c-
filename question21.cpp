#include <iostream>
using namespace std;
int MultiplyBY2(int &n)
{
    n *= 2;
    return n;
}
int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "Value of a before the function call:  " << n << endl;
    MultiplyBY2(n);
    cout << "Value of a before the function call:  " << n << endl;
    return 0;
}