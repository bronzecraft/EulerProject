#include<iostream>
#include<math.h>
#include<vector>
#include<string>
using namespace std;

vector<int> d(int x)
{
	vector<int> num,dat;
	for(int i = 1; i <=x;i++)
	{
		num.push_back(i);
	}
	int m =2;
	while(m<x)
	{
		for(int i = 2*m-1;i<x;i = i + m)
		{
			num.at(i) = 0;
		}

		m = m + 1;
	}

	for(vector<int>::iterator i =num.begin();i!=num.end();i++)
	{
		if(*i>1)
		{
			dat.push_back(*i);
		}
	}
	return dat;
}
vector<int> fac(int x)
{
	vector<int> num;
	vector<int> dat;
	dat = d(100);
	int m = 0,n = 0;
	while(dat.at(m)<=x)
	{
		if(x%dat.at(m)==0)
		{
			n = 0;
			num.push_back(dat.at(m));
			while(x%dat.at(m)==0)
			{
				x = x/dat.at(m);
				n = n +1;
			}
			num.push_back(n);
		}
		m = m + 1;
//		if(x ==1)
//		{
//			break;
//		}
	}
/*	if(x%dat.at(m)==0)
	{
		num.push_back(m);
		n = 0;
		while(x%dat.at(m)==0)
		{
			x = x/dat.at(m);
			n = n +1;
		}
		num.push_back(n);
	}
*/	return num;
}



vector<int> f(int a, int b)
{
	vector<int> numa;
	numa = fac(a);
	for(int i = 1;i<numa.size();i = i +2)
	{
		numa.at(i) = numa.at(i)*b;
	}
	return numa;

}

int main()
{
	vector<char> Str;
	int x,y;
	string nxy;
	cout<<"please enter x  number : ";
	cin>>x;
	cout<<endl;
	cout<<"please enter y  number : ";
	cin>>y;
	cout<<endl;
	vector<int> numa,numb;
	numa = fac(x);
/*	for(vector<int>::iterator i=numa.begin();i!=numa.end();i++)
	{
		cout<<*i<<" ";
	}
*/

	numb = f(x,y);
	nxy =to_string(x)+" = ";
//	cout<<x<<" equal ";
	for(int i = 1;i<numa.size();i =i +2)
	{
		nxy =nxy+ to_string(numa.at(i-1))+"^"+to_string(numa.at(i))+" * ";
//		cout<<numa.at(i-1)<<"^"<<numa.at(i)<<" * ";
	}
	const char *xy = nxy.data();
	cout<<*xy<<endl;
	Str.push_back(*xy);
	cout<<Str.at(0)<<endl;
//	cout<<x<<"^"<<y<<" equal: "<<endl;
/*	for(int i =1;i<numb.size();i = i +2)
	{

		cout<<numb.at(i-1)<<"^"<<numb.at(i)<<" * ";
	}
	cout<<1<<endl;
*/
}

