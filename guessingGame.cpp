#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "GUESSING GAME\nGame rules :\nYou have only three chances to guess the number , otherwise you will lose.\nGuess the number (1-10):- ";
    cin >> number;
    int secretnumber = 5;
    int tries = 0;
    while (number != secretnumber && tries < 2)
    {
        cout << "You have guessed the wrong one. Try again:- ";
        cin >> number;
        tries++;
    }
    if (number == secretnumber)
    {
        cout << "You have guessed the correct number!\n";
    } else {
        cout << "You lose.Game Over ***(0 tries left)\n";
    }

    return 0;
}