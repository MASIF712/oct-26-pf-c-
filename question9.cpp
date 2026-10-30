#include <iostream>
#include <string>
using namespace std;
void CheckSim(string phone_number)
{
    string substring = phone_number.substr(0, phone_number.find("-"));
    if (substring == "0300")
    {
        cout << "MOBLINK\n";
    }
    else if (substring == "0315")
    {
        cout << "Zong\n";
    }
    else if (substring == "0333")
    {
        cout << "Ufone\n";
    }
    else if (substring == "0345")
    {
        cout << "Telenor\n";
    }
}
int main()
{
    cout << "Enter a phone number: ";
    string phone_number;
    getline(cin, phone_number);
    CheckSim(phone_number);
    return 0;
}