#include <iostream>
using namespace std;
bool Plaindrome(int n)
{
    int orignal = n;
    int reverse = 0;
    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (reverse == orignal)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << "Enter a number : ";
    int n;
    cin >> n;
    bool isplaindrome = Plaindrome(n);
    if (isplaindrome == true)
    {
        cout << "Number is Plaindrome";
    }
    else
    {
        cout << "Number is NOT a Plaindrome";
    }
    return 0;
}