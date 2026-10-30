#include <iostream>
using namespace std;
int appears(string s, char c)
{
    int count = 0;
    for (char ch : s)
    {
        if (ch == c)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    cout << "Enter a string : ";
    string s;
    getline(cin, s);
    cout << "Enter a character : ";
    char ch;
    cin.get(ch);
    int appears_count = appears(s, ch);
    cout << " THE " << ch << " appears " << appears_count << " TIMES IN " << s << endl;
    return 0;
}