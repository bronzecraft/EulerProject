#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int k = 0;
	vector<int> data;
	cout<<"please enter a number : "<<endl;
	cin >> x;
	data.push_back(1);
	data.push_back(0);
	for(int j  = 1; j <= x; j ++)
	{
		for(vector<int>::iterator i = data.begin();i!=data.end();i++)
		{
			*i = *i*j;
		}
		for (vector<int>::iterator i =data.begin();i!=data.end()-1;++i)
		{
			if(*i>=10)
			{
				*(i+1) = *(i+1) + *i/10;
				*i = *i%10;
			}
		}
		if(data.at(data.size()-1)>=10)
		{
			data.push_back(0);
		}
	}
	cout << "the result is : "<< endl;
	for(vector<int>::reverse_iterator i = data.rbegin();i !=data.rend();++i)
	{
		cout<<*i<< " ";
		
		k = *i;
		for(int t = 1; t <=2; t ++)
		{
			
			y = y +k%10;
			k = k/10;
//			cout << "  " << k<<endl;

		}
	}
	cout<<endl;
	cout<<"the sum of the result is : " << y<< endl;
	return 0;
}

