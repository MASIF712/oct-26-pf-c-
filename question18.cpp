#include <iostream>
using namespace std;
bool Exist(string s, char c)
{
    bool exist = false;
    for (char ch : s)
    {
        if (ch == c)
        {
            exist = true;
        }
    }
    return exist;
}
int main()
{
    string s;
    cout << "enter a string : ";
    getline(cin, s);
    char c;
    cout << "Enter a character : ";
    cin.get(c);
    if (Exist(s, c) ? true : false)
    {
        cout << c << " Exists in " << s << endl;
    }
    else
    {
        cout << c << " Does not exists in " << s << endl;
    }

    return 0;
}