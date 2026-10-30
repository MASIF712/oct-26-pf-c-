#include <iostream>
using namespace std;
int Max_Two(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int Max_Three(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    cout << "Enter two integers: ";
    int a, b, c, d, e;
    cin >> a >> b;
    cout << "Largest number is:" << Max_Two(a, b);
    cout << "\nEnter three integers: ";
    cin >> c >> d >> e;
    cout << "Largest number is : " << Max_Three(c, d, e);

    return 0;
}