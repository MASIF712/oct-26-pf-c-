#include <iostream>
using namespace std;
int findSquare(int n)
{
    return n * n;
}
int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;
    cout << "the square of " << number << " is : " << findSquare(number);
    return 0;
}