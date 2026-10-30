#include <iostream>
using namespace std;
int main()
{
    int integer;
    cout << "Enter a positive integer : ";
    cin >> integer;
    cout << "OOD number from 1 to " << integer << " are  \n";
    for (int i = 1; i <= integer; i += 2)
    {
        cout << i << " ";
    }

    return 0;
}