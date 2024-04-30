//Rock Scissor Paper in cpp
#include <iostream>
#include <cstdlib>

int main() {
    int x, i = 0, comp, c = 0, n = 0;
    char name[24];

    std::cout << "Do you know how to play RPS? Enter your name: ";
    std::cin >> name;

    while (i < 3) {
        std::cout << "\nEnter 0 for rock \t Enter 1 for paper \t Enter 2 for scissors: ";
        std::cin >> x;

        if (x >= 0 && x <= 2) {
            comp = rand() % 3;

            if (x == comp) {
                std::cout << "It's a draw!\n";
            } else if ((x == 0 && comp == 2) || (x == 1 && comp == 0) || (x == 2 && comp == 1)) {
                std::cout << name << " wins this round!\n";
                n++;
            } else {
                std::cout << "Computer wins this round!\n";
                c++;
            }

            i++;
        } else {
            std::cout << "Invalid input. Please enter 0, 1, or 2.\n";
        }
    }

    if (c > n) {
        std::cout << "Computer wins the game!\n";
    } else if (n > c) {
        std::cout << name << " wins the game!\n";
    } else {
        std::cout << "The game is a draw!\n";
    }

    return 0;
}
