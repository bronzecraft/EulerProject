#include <iostream>
#include <math.h>
using namespace std;
int isprime(int i)
{
	int m = 3;
	long double n;
	n = float(int(sqrt(i)));
	while (m <= n)
	{
		if (i % m==0.0) 
		{
			return 0;
			break;
		}
		else
		{
			m = m + 2.0;
		}
		if (m >= n)
		{
			return 1;
		}
	}
}
int main()
{
	long double  y = 600851475143,m;
	long z;
	z = long(sqrt(y));
	if (z%2==0)
	{
		z = z + 1;
	}

	while (z>2)
	{
		
		if (isprime(z) == 1 && fmod(y, z)<=0.01)
		{
			m = fmod(y, z);
			break;
		}
		z = z - 2;
	}
//	std::cout << z<< y<< std::endl;
	std::cout << z<< std::endl;

}