#include<iostream>
#include<stdio.h>
using namespace std;
void toh(char,char,char,int);
int main()
{
	int num;
	char s,d,i;
	cout<<"Enter the number of disks:";
	cin>>num;
	cout<<"\nEnter source:";
	cin>>s;
	cout<<"\nEnter destination:";
	cin>>d;
	cout<<"\nEnter intermediate:";
	cin>>i;
	cout<<"\nThe path followed is:"<<endl;
	toh(s,i,d,num);
	return 0;
}
void toh(char s,char i,char d,int num)
{
	if(num==1)
	{
	   cout<<"Disk moves from "<<s<<" to "<<d<<endl;
	   return;
	}
	toh(s,d,i,num-1);
	{
		cout<<"Disk moves from "<<s<<" to "<<d<<endl;
	}
	toh(i,s,d,num-1);
}
