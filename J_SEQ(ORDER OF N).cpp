#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct jobs{
	int j_no,d_line,profit;
};
struct disjoint{
	int *parent;
	disjoint(int n)
	{
		parent=new int[n+1];
		for(int i=0;i<n;i++)
		parent[i]=i;
	}

void sort_act(jobs a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j].profit>a[i].profit)
			swap(a[j],a[i]);
		}
	}
}
int find(int s)
{
	if(s==parent[s])
	return s;
	else
	return parent[s]=find(parent[s]);
	
}
void unio(int u,int v)
{
	parent[v]=u;
}
void dis_set(jobs a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int slot=find(a[i].d_line);
		if(slot>0)
		{
			
			unio(find(slot-1),slot);
			cout<<a[i].j_no<<" ";
		}
	}
	
}
};
int main()
{
	int n;
	jobs a[]={{1,2,100},{2,1,19},{3,2,27},{4,1,25},{5,3,15}};
	n=sizeof(a)/sizeof(a[0]);
	disjoint ds(n);
	ds.sort_act(a,n);
	ds.dis_set(a,n);
}
