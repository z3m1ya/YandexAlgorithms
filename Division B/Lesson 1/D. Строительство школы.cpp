#include <iostream>

int main()
{
	long n;
	long a;
	long s;
	std::cin >> n;
	for (long i = 0; i < n; i++)
	{
		std::cin >> a;
		if (i == (n - 1) / 2)
			s = a;
	}
	std::cout << s;
}