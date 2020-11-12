/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include<iostream>
using namespace std;
int isprime(int i)
{
	int m = 3;
	long double n;
	n = float(int(sqrt(i)))+1;
	while (m <= n)
	{
		if (i % m == 0.0)
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
	int a = 13, n = 5;
	while (n <= 10000)
	{
		if (isprime(a) == 1)
		{ 
			n = n + 1;
		}
		a = a + 2;
	}
	a = a - 2;
	cout << "the result is " << a << endl;
	cout << "the result is " << isprime(a)<< endl;
}