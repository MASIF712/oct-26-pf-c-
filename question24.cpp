#include <iostream>
using namespace std;
int coins = 0, lives = 3;
bool stop = false;
void CollectCoins()
{
    coins += 10;
    cout << "You collected 10 coins!" << endl;
}
bool LoseLife()
{
    lives--;
    cout << "You lost a life!" << endl;
    if (lives <= 0)
    {
        cout << "\n You have no lives left DIE END OF GAME ";
        return true;
    }
    else
    {
        return false;
    }
}
void ShowStatus()
{
    cout << "Coins : " << coins << endl;
    cout << "Lives : " << lives << endl;
}
bool ExitGame()
{
    return true;
}
int main()
{
    do
    {
    lebel:
        cout << "===== GAME ====" << endl;
        cout << "1. Collect Coins" << endl;
        cout << "2. Loss a Life" << endl;
        cout << "3. Show Status" << endl;
        cout << "4. Exit Game" << endl;
        cout << "Enter Choice : ";
        int n;
        cin >> n;
        switch (n)
        {
        case 1:
            CollectCoins();
            break;
        case 2:
            stop = LoseLife();
            break;
        case 3:
            ShowStatus();
            break;
        case 4:
            stop = ExitGame();
            break;

        default:
            cout << "please enter valid choice ";
            goto lebel;
            break;
        }
    } while (stop != true);
    return 0;
}