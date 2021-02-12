#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<int> prime(int x)
{
	vector<int> num1000,num;
	for(int i =1;i!=x+1;i++)
	{
		num.push_back(i);
	}
	int m = 2;
	while(m<x)
	{
		for(int i = 2*m-1;i<x;i = i + m)
		{
			num.at(i)=0;
		}
		m = m + 1;
	}
	for(vector<int>::iterator i=num.begin();i!=num.end();i++)
	{
		if(*i>1)
		{
			num1000.push_back(*i);
		}
	}
	return num1000;
}
int isprime(int x1,vector<int> num1000)
{
	if(x1>num1000.at(num1000.size()-1))
	{
		return -1;
	}
	for(vector<int>::iterator t=num1000.begin(); t != num1000.end();t++)
	{
		if( x1 < *t)
		{
			return 0;
		}
		else if( *t == x1)
		{
			return 1;
		}
	}
}
int main()
{
	vector<int> num1000;
	vector<int> num;
	int x,m,n=0;
	cout<<"please enter a number :";
	cin>>x;
	cout<<endl;
	num1000 = prime(x);
	cout<<"all primes below "<<x<<" is calculated"<<endl;
	int a=0,b=0,c=0;
/*	cout<<"please enter x1 : "<<endl;
	cin >> x ;
	cout<<isprime(x,num1000)<<endl;
	cout<<num1000.size()<<endl;
*/	for(int i = 167; i>0; i--)
	{
		for(int j = -999; j<=999; j = j +2)
		{
			n = 0;
			m = n*n + j*n + num1000.at(i);
			while(isprime(m,num1000)==1)
			{
				n = n + 1;
				num.push_back(m);
				m = n*n + j*n + num1000.at(i);
			}
//			cout<<m<<endl;
			if(a<num.size())
			{
/*				cout<< n-1<<endl;
				for(int tx = 0;tx<n;tx++)
				{
					cout<< tx*tx + j*tx + num1000.at(i)<<" ";
				}
				cout<<endl;
*/				a = num.size()-1;
				b = num1000.at(i);
				c = j;
/*				cout<<"n = "<<a<<" "<<"b = "<<b<<" "<<"a=  "<<c<<endl;
				for(vector<int>::iterator t=num.begin();t!=num.end();t++)
				{
					cout<<*t<<" ";
				}
				cout<<"///"<<a*a+c*a+b << "///"<<endl;
*/			}
			num.clear();
		}
//		cout<<num1000.at(i)<<endl;
	}

	cout<<"n = "<<a<<" "<<"b = "<<b<<" "<<"a=  "<<c<<endl;
	cout<<"the result is : " << c*b<<endl;
	return 0;
	
}
