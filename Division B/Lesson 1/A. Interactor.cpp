#include <iostream>

int main()
{
    int r, i, c, a = 100;
    std::cin >> r >> i >> c;

    // 1
    if (i == 0)
        if (r != 0)
            a = 3;
        else
            a = c;

    //2
    if (i == 1)
        a = c;

    //3
    if (i == 4)
        if (r != 0)
            a = 3;
        else
            a = 4;

    //4
    if (i == 6)
        a = 0;

    //5
    if (i == 7)
        a = 1;

    //6
    if (a == 100)
        a = i;

    std::cout << a;
}