#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
using namespace std;

int d(int x)
{
	int m = 1;
	for(int i = 2; i<sqrt(x);i++)
	{
		if(x%i ==0)
		{
			m = m + i+ x/i;
		}
	}
	if(int(sqrt(x))==sqrt(x))
	{
		m = m + sqrt(x);
	}
	if(m>x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int m,x;
	long long mx;
	mx=0;
	vector<int> dat;
	/*
	cout<<"please enter a number: "<<endl;
	cin>> m;
	cout <<m<<" "<<d(m)<<endl;
*/
	for(int ii = 2;ii<28213;ii++)
	{
		if(d(ii)>0)
		{
			dat.push_back(ii);
		}
	}
	cout<<dat.size()<<endl;
	for (int n = 2; n < 28213; n++)
	{
		m = 0;
		vector<int>::iterator i;
		for (i = dat.begin(); i != dat.end(); i++)
		{
			if (*i + dat.at(0) > n)
			{
				m = 3;
				break;
			}
			else if (*i + dat.at(0) == n)
			{
				m = 2;
				break;
			}
		}
//		cout<<m<<endl;
		if (m == 0)
		{
			mx = mx +n; 
			cout << "Und number: " << n << endl;

		}
		else if (m == 3)
		{
			vector<int>::iterator j;
			for (j = dat.begin(); j != i; j++)
			{
				vector<int>::iterator k;
				for (k = dat.begin(); k != j; k++)
				{
					if ((*j + *k > n) || (*j + *k == n))
					{
						x = *j + *k;
//						cout<<x<<endl;
						break;
					}
				}
				if (*k + *j == n)
				{
					break;
				}
			}
			if (x != n)
			{
				mx = mx + n;
				cout << "Und number: " << n << endl;
			}
		}
	}
	cout<<fixed<<setprecision(0)<<mx<<endl;
}


