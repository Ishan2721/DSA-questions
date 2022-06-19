#include<iostream>
#include<stdio.h>
using namespace std;
int size;
int hash1(int);
int main()
{
	int ch,t;
	cout<<"ENTER SIZE:";
	cin>>size;
	int arr[size];
	int hashtable[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nELEMENT "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		t=arr[i];
		int in=hash1(t);
		hashtable[in]=t;
	}
	cout<<"\nHASHTABLE: ";
	for(int i=0;i<size;i++)
	{
		cout<<hashtable[i]<<" ";
	}
	return 0;
}
int hash1(int key)
{
	int index;
	index=key%size;
	return index;
}

