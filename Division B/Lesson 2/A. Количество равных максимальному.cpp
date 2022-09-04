#include <iostream>

int main()
{
	int max = 0, n = 0, a = -1;
	while (a != 0)
	{
		std::cin >> a;
		if (a > max) {
			max = a;
			n = 0;
		}
		if (a == max)
			n++;
	}
	std::cout << n;
}