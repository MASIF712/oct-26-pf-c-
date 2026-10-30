#include <iostream>
#include <string>
using namespace std;
string LastWord(string s)
{
    int location;
    string last;
    for (int i = s.length(); i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            location = i;
            break;
        }
    }
    // if (s[location] == ' ')
    // {
    // cout << "at " << location << " space is ";
    // }
    last = s.substr(location + 1, s.length() - location - 1);

    return s.substr(location + 1, s.length() - location - 1);
    ;
}
int main()
{
    cout << "Enter a string : ";
    string s;
    getline(cin, s);
    cout << "Last word of the sentence is: " << LastWord(s) << endl;
    return 0;
}