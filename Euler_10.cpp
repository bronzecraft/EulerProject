#include<iostream>
#include <vector>
using namespace std;
//using std::vector;
int main()
{
	vector<int> v1(20, 2);
	int m = 1;
	for (size_t i = 0; i < 2000000; i++)
	{
		v1[i] = i+1;
	}
	cout << v1/2 << endl;
/*	while (m<20)
	{
		v1 = v1 /m
	}
	*/
	system("pause");
}