#include <iostream>
using namespace std;
int revnum(int i)
{
	int t = 0, m = 0;
	while (i >= 10)
	{
		m = (i % 10 + m) * 10;
		i = i / 10;
	}
	m = m + i;
	return m;
}
int factor(int i) 
{
	int m = 999;
	int n;
	while (m > 499)
	{
		if (i % m == 0 && i/m >=100 && i/m<=999)
		{
			return m;
			break;
		}
		m = m - 1;
	}
	return 0;
}
int main()
{
	int i = 998001, m = 999, n = 999;
	int j = 9, k = 9, l = 0;
	while (j >=1)
	{
		while (k >= 0)
		{
			while (l >= 0)
			{
				i = j * 100000 + k * 10000 + l * 1000 + l * 100 + k * 10 + j;
				if (factor(i) > 0)
				{
//					return i;
					goto end;
//					break;
				}
				l = l - 1;
			}
			k = k - 1;
			l = 9;
		}
		j = j - 1;
		k = 9;

	}
	
end:	cout << "result is " << i << endl;
	cout << "factor " << i << " is " << factor(i) << endl;
	return i;
}