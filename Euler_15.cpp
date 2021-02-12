#include <iostream>
using namespace std;
int main()
{
	int m = 0, n ;
	cout<<"please enter a number : ";
	cin>>n;
	for(int i = 1;i< n + 1;i++)
	{
//		for(int j = 1; j<=i;j++)
//		{
			m = m + i * (i + 1)/2;
//		}
		cout << m<<endl;
	}
	cout <<"the result is: "<<m<<endl;
	return 0;
}



