#include <iostream>
using namespace std;
string small(string s)
{

    for (int i = 0; i <= s.length(); i++)
    {
        s[i] = s[i] + 32;
    }
    return s;
}
int main()
{
    string sentence;
    cout << "Enter any sentence or word: ";
    getline(cin, sentence);
    cout << small(sentence);
    return 0;
}