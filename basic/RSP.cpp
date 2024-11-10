// Rock Scissor Paper in cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int x, i = 0, comp, c = 0, n = 0;
    char name[24];

    cout << "Do you know how to play RPS? Enter your name: ";
    cin >> name;

    while (i < 3)
    {
        cout << "\nEnter 0 for rock \t Enter 1 for paper \t Enter 2 for scissors: ";
        cin >> x;

        if (x >= 0 && x <= 2)
        {
            comp = rand() % 3;

            if (x == comp)
            {
                cout << "It's a draw!\n";
            }
            else if ((x == 0 && comp == 2) || (x == 1 && comp == 0) || (x == 2 && comp == 1))
            {
                cout << name << " wins this round!\n";
                n++;
            }
            else
            {
                cout << "Computer wins this round!\n";
                c++;
            }

            i++;
        }
        else
        {
            cout << "Invalid input. Please enter 0, 1, or 2.\n";
        }
    }

    if (c > n)
    {
        cout << "Computer wins the game!\n";
    }
    else if (n > c)
    {
        cout << name << " wins the game!\n";
    }
    else
    {
        cout << "The game is a draw!\n";
    }

    return 0;
}
