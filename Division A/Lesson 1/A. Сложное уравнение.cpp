// ( ax + b ) : ( cx + d ) = 0

#include <iostream>

int main()
{
    int a, b, c, d;
    int xC, xZ;
    std::cin >> a >> b >> c >> d;
	
    if (a == 0) {
        if (b == 0)
            std::cout << "INF";
        else
            std::cout << "NO";
        return 0;
    }
	
    if (c == 0)
        xZ = 0;
    else
        xZ = ( - d) / c;

    xC = ( - b) / a;
    if (((a * xC + b) == 0) && (xZ != xC))
        std::cout << xC;
    else 
        std::cout << "NO";
	
    return 0;
}