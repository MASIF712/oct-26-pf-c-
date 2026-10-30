#include <iostream>
using namespace std;
int word_find(string s)
{
    int count = 1;
    for (char c : s)
    {
        if (c == ' ')
            count++;
    }
    return count;
}
int main()
{
    cout << "Enter any sentence: ";
    string sentence;
    getline(cin, sentence);
    cout << "Number of words in the sentence are: " << word_find(sentence);
    return 0;
}