#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a, max = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a;
        s += a;
        if (a > max)
            max = a;
    }
    std::cout << s - max;
}