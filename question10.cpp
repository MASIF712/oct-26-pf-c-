#include <iostream>
#include <string>
using namespace std;
string day(string date)
{
    return date.substr(0, date.find("/"));
}
string month(string date)
{
    return date.substr(3, 2);
}
string year(string date)
{
    return date.substr(6, 4);
}
int main()
{
    cout << "Enter a date inthis formate(DD/MM/YYYY): ";
    string date;
    getline(cin, date);
    cout << day(date) << endl;
    cout << month(date) << endl;
    cout << year(date) << endl;
    return 0;
}