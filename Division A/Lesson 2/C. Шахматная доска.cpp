#include <iostream>

int main()
{
    int n;
    bool map[10][10] = { false };
    std::cin >> n;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y;
        map[x][y] = true;
    }
    int p = 0;
    for (int x = 1; x <= 8; x++)
    {
        for (int y = 1; y <= 8; y++)
        {
            if (map[x][y])
            {
                if (!map[x][y + 1])
                    p++;
                if (!map[x][y - 1])
                    p++;
                if (!map[x - 1][y])
                    p++;
                if (!map[x + 1][y])
                    p++;
            }
        }
    }
    std::cout << p;
}