#include <iostream>

int main()
{
    int a = 3, b = 5, c = 999;
    int rt_3, n, rt_5, rt;
        rt_3 = (3 + c / 3 * 3) * (c / 3) / 2;
        rt_5 = (5 + c / 5 * 5) * (c / 5) / 2;

        rt = rt_3 + rt_5 - (15 + c / 15 * 15) * (c / 15) / 2;
        std::cout << "the result is "<< rt << std::endl;
        std::cout << "the result is " << rt_5<< std::endl;
        std::cout << "the result is " << rt_3 << std::endl;

}