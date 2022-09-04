#include <iostream>

int main()
{
    std::string x, y, z;
    std::cin >> x;
    std::cin >> z;
    int nx = x.size();
    int nz = z.size();
    std::string temp_x = "";
    for (int j = 0; j < (100 / nx) + 1; j++)
    {
        temp_x += x;
        //std::cout << temp_x <<"\n";
    }
    x = temp_x;
    int max_temp = 0;
    int tnx = nx;
    for (int i = 0; i < nx; i++)
    {
        int temp = 0;
        int temp2 = 0;
        for (int j = 0; j < nz; j++)
        {
            if (x[j] == z[j])
                temp2++;
            else
                j = nz;
            if (temp2 % nx == tnx)
                temp = temp2;
            //std::cout << temp2 << " " << nx << " " << (nx == tnx) << (temp2 % nx == 0) << "\n";
            if ((nx == tnx) && (temp2 % nx == 0))
                temp = temp2;
        }
        //std::cout << temp << " " << nx << " " << tnx<<"\n";
        if ((temp > max_temp))
            max_temp = temp;
        x.erase(0, 1);
        tnx -= 1;
    }
    std::cout << z.erase(0, max_temp);
}