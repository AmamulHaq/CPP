
#include <iostream>
#include <string>

using namespace std;
class game
{
public:
    char name[24];
    char string[64];
    int score;
    void get()
    {
        cout << "Enter name of game: " << endl;
        cin >> name;
        cout << "Your opinion on " << name << "game: " << endl;
        cin >> string;
        cout << "Your score in " << name << " game: " << endl;
        cin >> score;
    }
    void display()
    {
        cout << name << endl
             << string << endl
             << "score: " << score << endl
             << endl;
    }
};
int main()
{
    game g[5];
    for (int i = 0; i < 5; i++)
    {
        g[i].get();
    };
    cout << "Your details on different games are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        g[i].display();
    };

    return 0;
}