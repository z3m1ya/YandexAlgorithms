#include <iostream>

int main()
{
	int t = -1;
	int l, k;
	int a[10000];
	std::cin >> l >> k;

	for (int i = 0; i < k; i++)
	{
		std::cin >> a[i];
		if (a[i] == (l - 1) / 2)
			t = i;
	}

	if (t != -1 && l % 2 == 1)
	{
		std::cout << a[t];
		return 0;
	}

	for (int i = k - 1; i >= 0; i--)
		if (a[i] < (l / 2)) {
			std::cout << a[i] << " ";
			i = -1;
		};
	for (int i = 0; i < k; i++)
		if (a[i] > (l / 2) - 1) {
			std::cout << a[i];
			i = k + 1;
		};
}