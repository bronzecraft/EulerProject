#include <iostream>
int main()
{
	int a = 1, b = 2;
	int c, rt = 2;
	while (rt <= 4000000) {
		c = a + b;
		a = b;
		b = c;
		if (c>= 4000000)
		{
			break;
		}
		c = a + b;
		a = b;
		b = c;
		if (c >= 4000000)
		{
			break;
		}
		c = a + b;
		a = b;
		b = c;
		rt = rt + c;
	}
	std::cout << " the result is " << rt << std::endl;
	std::cout << " the a is " << a << std::endl;
	std::cout << " the b is " << b << std::endl;
}