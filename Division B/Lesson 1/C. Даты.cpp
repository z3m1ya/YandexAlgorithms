#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if ((a > 12 || b > 12) || a == b)
        std::cout << 1;
    else
        std::cout << 0;
}