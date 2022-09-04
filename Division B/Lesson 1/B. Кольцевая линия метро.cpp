#include <iostream>

int main()
{
    int n, i, j, a1, a2;
    std::cin >> n >> i >> j;

    a1 = abs(i - j) - 1;
    a2 = n - 2 - a1;
    std::cout << ((a1 > a2) ? a2 : a1);
}