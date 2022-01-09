#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter range \n";
	int n;
	cin>>n;
	int nums[n];
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element \n";
		cin>>nums[i];
	}
	for(i=0;i<=n;i++)
	{
		int c=0,j;
		for(j=0;j<n;j++)
		{
			if(nums[j]==i)
			c++;
		}
		if(c==0)
		cout<<"Element missing : "<<i;
	}
}
