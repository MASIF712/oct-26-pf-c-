#include <iostream>
using namespace std;
void print_tringularstar(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Enter any positive integer: ";
    int n;
    cin >> n;
    print_tringularstar(n);
    return 0;
}