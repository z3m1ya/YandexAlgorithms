#include <iostream>

struct P
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
};

int main()
{
    P p[100];
    int n;
    int fix;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> p[i].x1 >> p[i].y1 >> p[i].x2 >> p[i].y2 >> p[i].x3 >> p[i].y3 >> p[i].x4 >> p[i].y4;
    }

    for (int i = 0; i < n; i++) {
        double xc1 = (p[i].x1 + p[i].x2 * 1.0) / 2;
        double xc2 = (p[i].x2 + p[i].x3 * 1.0) / 2;
        double xc3 = (p[i].x3 + p[i].x4 * 1.0) / 2;
        double xc4 = (p[i].x4 + p[i].x1 * 1.0) / 2;
        double xc5 = (p[i].x1 + p[i].x3 * 1.0) / 2;
        double xc6 = (p[i].x2 + p[i].x4 * 1.0) / 2;
        double yc1 = (p[i].y1 + p[i].y2 * 1.0) / 2;
        double yc2 = (p[i].y2 + p[i].y3 * 1.0) / 2;
        double yc3 = (p[i].y3 + p[i].y4 * 1.0) / 2;
        double yc4 = (p[i].y4 + p[i].y1 * 1.0) / 2;
        double yc5 = (p[i].y1 + p[i].y3 * 1.0) / 2;
        double yc6 = (p[i].y2 + p[i].y4 * 1.0) / 2;
        if ( ((xc1 == xc3) && (yc1 == yc3)) || ((xc2 == xc4) && (yc2 == yc4)) || ((xc5 == xc6) && (yc5 == yc6)))
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
}
