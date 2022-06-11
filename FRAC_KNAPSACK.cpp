#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct obj{
	int obj_no,profit,weight;
	float p_w,x;
};
void sort_obj(obj a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[j].profit/a[j].weight)>(a[i].profit/a[i].weight))
			swap(a[j],a[i]);
		}
	}
}
void frac_knap(obj a[],int n,int k)
{
	int i=0,total_profit=0;
	while(k>0)
	{
		a[i].x=min(k,a[i].weight);
		k=k-a[i].x;
		a[i].x=a[i].x/a[i].weight;
		total_profit+=a[i].x*a[i].profit;
		cout<<a[i].obj_no<<" "<<endl;
		i++;
	}
	cout<<total_profit;
}
int main()
{
	int n;
	obj a[]={{1,1,1},{2,6,2},{3,18,3},{4,22,6},{5,28,7}};
	n=sizeof(a)/sizeof(a[0]);
	sort_obj(a,n);
	frac_knap(a,n,9);
}
