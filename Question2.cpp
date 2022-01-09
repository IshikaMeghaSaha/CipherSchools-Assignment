#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,target;
	cout<<"Enter number of elements \n";
	cin>>n;
	int arr[n];
	cout<<"Enter target \n";
	cin>>target;
	int diff=abs(target-(arr[0]+arr[1]+arr[2])),i,j,k;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element \n";
		cin>>arr[i];
	}
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				int sum=arr[i]+arr[j]+arr[k];
				if((abs(sum-target))<=diff)
				diff=abs(sum-target);
			}
		}
	}
	cout<<"Closest sum :"<<diff+target;
}
