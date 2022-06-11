#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    int number;
    cout << "GUESSING GAME\nGame rules :\nYou have only three chances to guess the number , otherwise you will lose.\nGuess the number (1-10):- ";
    cin >> number;
    
    srand(time(0));
    int secretNumber = rand() % 10;

    int tries = 2;
    while (number != secretNumber && tries > 0)
    {
        cout << "You have guessed the wrong one ("<< tries <<" tries left).Try again:- ";
        cin >> number;
        tries--;
    }
    if (number == secretNumber)
    {
        cout << "You have guessed the correct number! You won.\n";
    } else {
        cout << "You lose.Game Over ***(0 tries left)\n";
    }

    return 0;
}