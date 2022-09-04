#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int l[1000];
    int max = 1;
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> l[i];
        if (l[i] > max)
            max = l[i];
        sum += l[i];
    }
    if (sum - max >= max)
        std::cout << sum;
    else
        std::cout << max - (sum - max);
}
