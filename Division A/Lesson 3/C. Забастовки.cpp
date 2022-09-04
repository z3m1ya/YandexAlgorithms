#include <iostream>

int main()
{
    bool d[1000000] = { false };
    int n, k;
    std::cin >> n >> k;
    int a, b;
    int m = 0;
    for (int i = 0; i < k; i++)
    {
        std::cin >> a >> b;
        for (int j = a; j <= n; j += b)
        {
            if (j % 7 != 6 && j % 7 != 0 && !d[j]) {
                d[j] = true;
                m++;
                //std::cout << j << "\n";
            }
        }
    }
    std::cout << m;
}
