#include <iostream>
#include <string>
using namespace std;
bool Plaindrome(string s)
{
    bool is_plaindrome = true;
    for (int i = 0; i <= s.length() / 2; i++)
    {
        if (s[s.length() - 1 - i] != s[i])
        {
            is_plaindrome = false;
            break;
        }
    }
    return is_plaindrome;
}
int main()
{
    cout << "Enter a string : ";
    string s;
    getline(cin, s);
    bool is_plaindrome = Plaindrome(s);
    if (is_plaindrome)
    {
        cout << s << " is a Plaindrome!";
    }
    else
    {
        cout << s << " is Not a Plaindrome!";
    }
    return 0;
}