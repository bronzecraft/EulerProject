#include <iostream>
int main()
{
	int i = 1, m = 0, n = 1;
	for (int j = 100; j >= 1; j = j - 1)
	{
		for ( i = 1; i < j; i++)
		{
			m = m + 2 * j * i;
		}
	}
	std::cout << m << std::endl;
	return i;
}