#include <iostream>

template <class T1, class T2>
class DefaultTemplate
{
public:
    T1 x;
    T2 y;
    DefaultTemplate(T1 a, T2 b) : x(a), y(b) {}
    void display()
    {
        std::cout << "\n x: " << x << "\n y: " << y;
    }
};

int main()
{
    DefaultTemplate<int, float> DT1(42, 44.3);
    DT1.display();

    DefaultTemplate<float, int> DT2(24.24, 42);

    return 0;
}
//no contribution