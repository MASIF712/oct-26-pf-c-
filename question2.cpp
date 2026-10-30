#include <iostream>
using namespace std;
int larger(int n1, int n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}
int main()
{
    cout << "Enter two numbers: ";

    int n1, n2;
    cin >> n1 >> n2;
    cout << "Larger number is : " << larger(n1, n2);
    return 0;
}