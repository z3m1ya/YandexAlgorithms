#include <iostream>
#include <cmath>

int main()
{
	long x1, x2, x3, y1, y2, y3, r, count = 0;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> r;

	for (long y = std::max(y1, y3 - r); y <= std::min(y2, y3 + r); y++)
	{
		long x4 = ceil(x3 - sqrt(pow(r, 2) - pow(abs(y - y3), 2)));
		long x5 = floor(x3 + sqrt(pow(r, 2) - pow(abs(y - y3), 2)));
		x4 = x4 > x1 ? x4 : x1;
		x5 = x5 < x2 ? x5 : x2;
		//std::cout<< count <<" " << x5 << " " << x4 << "\n";
		if (x5 >= x4)
			count += (x5 - x4 + 1);
	}
	std::cout << count;
}
