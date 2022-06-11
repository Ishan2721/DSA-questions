#include<iostream>
#include<stdio.h>
using namespace std;
struct activity{
	int start,finish;
};
void sort_act(activity a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j].finish<a[i].finish)
			swap(a[j],a[i]);
		}
	}
}
void act_select(activity a[],int n)
{
	int i=0;
	cout<<"\nSEQUENCE OF ACTIVITIES:"<<i<<" ";
	for(int j=1;j<=n;j++)
	{
		if(a[j].start>=a[i].start)
		{
			cout<<j<<" ";
			i=j;
		}
	}
	
}
int main()
{
	activity a[]={{5,9},{1,2},{3,4},{0,6},{5,7},{8,9}};
	int n=sizeof(a)/sizeof(a[0]);
	sort_act(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<"{"<<a[i].start<<" ,"<<a[i].finish<<"}"<<endl;
	}
	act_select(a,n);
}
