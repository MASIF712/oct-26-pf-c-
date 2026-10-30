#include <iostream>
using namespace std;
bool isEven(int n)
{
    bool even;
    if (n % 2 == 0)
    {
        even = true;
    }
    else
    {
        even = false;
    }
    return even;
}
int main()
{
    cout << "Enter a number : ";
    int n;
    cin >> n;
    bool even = isEven(n);
    if (even == true)
    {
        cout << " Awesome your number was even " << n;
    }
    else
    {
        cout << " Sory you enter not an even numebr " << n;
    }
    return 0;
}