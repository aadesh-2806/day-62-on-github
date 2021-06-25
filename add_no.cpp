#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i,j,n;
	vector<int> v;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j;
		v.push_back(j);
	}
	for(i=n-1;i>=0;i--)
	{
		//vector<int>::iterator x;
		//x=v.at(i);
		if(v.at(i)==9)
		{
			v.at(i)=0;
		}
		else
		{
			v.at(i)=v.at(i)+1;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<v.at(i);
	}
	return 0;
}
