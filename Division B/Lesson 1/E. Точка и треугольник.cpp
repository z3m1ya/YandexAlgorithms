#include <iostream>
#include <cmath>

struct Point
{
	int x = 0, y = 0;
};

int l(Point a, Point b)
{
	return (abs(a.x - b.x) * abs(a.x - b.x) + abs(a.y - b.y) * abs(a.y - b.y));
}

int main()
{
	Point a, b, c, p;
	int d, o = 3;
	std::cin >> d >> p.x >> p.y;
	b.x = d;
	c.y = d;
	int min = l(c, p);
	if (l(b, p) <= min)
	{
		o = 2;
		min = l(b, p);
	}
	if (l(a, p) <= min)
		o = 1;
	if (((p.x + p.y) <= d) && (p.x >= 0) && (p.y >= 0))
		o = 0;
	std::cout << o;
}