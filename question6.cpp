#include <iostream>
using namespace std;
void paramit(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space >= 0; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Enter any positvie integer: ";
    int n;
    cin >> n;
    paramit(n);
    return 0;
}