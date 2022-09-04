#include <iostream>

int n;
long long a[10001];
int k;

long long sum() {
    long long s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += a[i];
    }
    return s;
}

void dc() {
    long long s = sum() / (n - 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = s - a[i];
    }
}

int main()
{
    std::cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 1; i <= k; i++)
    {
        dc();
    }
    long long max = a[1], min = a[1];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    std::cout << max - min;
}