#include <iostream>

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int n, m;
	std::cin >> n >> m;
	int a[21] = { 0 };
	for (int i = 1; i < n + 1; i++)
	{
		a[i] = i;
	}
	for (int i = 0; i < m; i++)
	{
		int x, y, t;
		std::cin >> x >> y;
		swap(&a[x], &a[y]);
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] != i) {
			int t = i;
			while (a[t] != i) {
				swap(&a[t], &a[n - 1]);
				std::cout << t << " " << n - 1 << "\n";
				t = a[n - 1];
			}

			swap(&a[t], &a[n]);
			std::cout << t << " " << n << "\n";
			t = a[n];

			swap(&a[t], &a[n]);
			std::cout << t << " " << n << "\n";
			t = a[n];

			std::cout << a[n - 1] << " " << n - 1 << "\n";
			swap(&a[a[n - 1]], &a[n - 1]);

		};

	}
	if (a[n - 1] != n - 1) {
		swap(&a[n - 1], &a[n]);
		std::cout << n - 1 << " " << n << "\n";
	};

}