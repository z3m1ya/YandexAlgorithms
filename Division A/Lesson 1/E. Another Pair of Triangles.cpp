#include <iostream>

int main()
{
    long long p;
    std::cin >> p;

    if (p < 3 || p == 4) {
        std::cout << "-1";
        return 0;
    }

    long long a, b, c;
    a = p / 3;
    b = (p - a) / 2;
    c = p - a - b;
    std::cout << a << " " << b << " " << c << "\n";

    a = 0, b = 1, c = p;
    while (a + b + c != p || a + c <= b)
    {
        a++;
        b = 1;
        c = p - a - b;
        while (a + b <= c || b < c)
        {
            b++;
            c = p - a - b;
        }
    };
    std::cout << a << " " << b << " " << c;
}
