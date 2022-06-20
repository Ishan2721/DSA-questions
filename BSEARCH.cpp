#include<iostream>
#include<stdio.h>
using namespace std;
int b_search(int arr[],int ele,int size)
{
	int lb=0,ub=size-1;
	while(lb<=ub)
	{
		int mid=(lb+ub)/2;
		if(arr[mid]==ele)
		return mid;
		else if(arr[mid]<ele)
		lb=mid+1;
		else
		ub=mid-1;
	}
	return -1;
	
}
int main()
{
	int a[6]={1,67,89,102,107,110};
	int s=sizeof(a)/sizeof(a[0]);
	int num;
	for(int i=0;i<s;i++)
	cout<<a[i]<<" ";
	cout<<"\nENTER THE NUMBER YOU WANT TO SEARCH:";
	cin>>num;
	int x=b_search(a,num,s);
	if(x==-1)
	cout<<"\nELEMENT NOT FOUND !";
	else
	cout<<"\nELEMENT FOUND AT INDEX "<<x;
	return 0;
	
}
