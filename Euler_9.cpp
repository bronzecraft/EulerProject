#include<iostream>
#include<math.h>
#define eps 1e-8
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	for ( a = 2; a < 335; a++)
	{
		for ( b = a+1; b < 500; b++)
		{
			if (abs(sqrt(pow(a, 2) + pow(b, 2)) + a + b - 1000) <= eps)
			{
				cout << "a b c is " << a << " " << b << " " << 1000 - a - b << endl;
				cout << a*b* sqrt(pow(a, 2) + pow(b, 2)) << endl;
			}
		}
	}
	return 0;
}