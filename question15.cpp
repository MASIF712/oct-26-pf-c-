#include <iostream>
using namespace std;
int digits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "THERE ARE " << digits(n) << " digits in " << n << endl;
    return 0;
}