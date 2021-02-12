#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> f(int x)
{
	int m,n,k;
	vector<int> num;
	m = 1;
	while( m<x)
	{
		m = m *10;
		num.push_back(0);
	}
	while(m!=1)
	{
		while(m<x)
		{
			m = m *10;
		}
		num.push_back(m/x);
		m = m %x;
	}
	return num;
}
int main()
{
	int x,y;
	int t;
	t= 0;
	vector<int> dat;
//	vector<int> data={2,4,8,16,32,64,128,256,512,5,25,125,625,10,20,40,80,160,320,640,50,100,200,400,800,250,500};
	cout<<"please enter a number: "<<endl;
	cin>>y; 
	for( x = 3; x<=y;x= x + 2)
	{

	if((x%2!=0)&&(x%5!=0))	
	{
		dat = f(x);
		if(dat.size()-1>t)
		{
			t = dat.size();
			cout<<x<<"  ";
		for(vector<int>::iterator i=dat.begin();i!=dat.end();i++)
		{
			cout<<*i;
		}
		cout<<"  "<< dat.size()-1<<endl;
		}
	}
	}

		return 0;
}
