#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
	int m,n,su;
	cout<<"please enter a number : ";
	cin>>m;
	cout<<m<<endl;
	if(m<=1)
	{
		cout<<"the result is : "<<1<<endl;
		return 0;
	}
	else
	{
		n = 1;
		for(int i = 3; i<=m;i = i + 2)
		{
			n = n + i*i*4-6*(i-1);
		}
		cout<<"the result is : "<< n<<endl;
		return 0;
	}
}
