#include <iostream>
#include <iomanip>

int main() {
    int n, i;
    float *p, sum = 0, avg;

    std::cout << "How many students are there? ";
    std::cin >> n;

    std::cout << "Enter marks of each student: ";
    p = new float[n];

    for (i = 0; i < n; i++) {
        std::cin >> *(p + i);
        sum += *(p + i);
    }

    avg = sum / n;

    std::cout << std::endl << "The average marks of ";
    for (i = 0; i < n; i++)
        std::cout << std::setw(3) << *(p + i);

    std::cout << " is: " << avg;

    delete[] p;
    return 0;
}
