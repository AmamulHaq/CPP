#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class products
{
    int jacket, coat, shoe;

public:
    products(int j = 600, int c = 800, int s = 900) : jacket(j), coat(c), shoe(s){};

    int netAmount()
    {
        return jacket + coat + shoe;
    };
};
int main()
{

    products product;

    int amount = product.netAmount();
    cout << "The total amount is: " << amount << endl;

    return 0;
}
