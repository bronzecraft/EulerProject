#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int a=0, b=0;
	vector<int> num;
	cout << "please enter a number :"<< endl;
	cin >> n;
	num.push_back(2);
	num.push_back(0);
	for (int m = 1; m <n;m++)
	{
		vector<int>::iterator i;
		for ( i = num.begin();i != num.end(); i++)
		{
			*i = *i*2;
		}
		if (num.at(num.size()-2)>=10)
		{
			num.push_back(0);
			
		}
		for ( i = num.begin(); i !=num.end()-1;i++)
		{
			*(i+1) = *(i+1) + *i/10;
			*i = *i%10;
		}
	}
	vector<int>::reverse_iterator j;
	for (j = num.rbegin(); j !=num.rend();++j)
	{
		cout<<*j;
		a = a + *j;
	}

	cout<<endl;
	cout<<"the result is : "<<a<<endl; 
	return 0;
}

		




