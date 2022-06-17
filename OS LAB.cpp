#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int bt[20],wt[20],tat[20],n,avgw=0,temp1,temp2,p[20];
	cout<<"Enter the number of processes:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nBurst time of P"<<i+1<<" :";
		cin>>bt[i];
		p[i]=i+1;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(bt[j]>bt[j+1])
			{
				temp1=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=temp1;
				temp2=p[j];
				p[j]=p[j+1];
				p[j+1]=temp2;
			}
		}
	}
	wt[0]=0;
	tat[0]=bt[0];
	int avgt=tat[0];
	for(int i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i];
		avgw+=wt[i];
		avgt+=tat[i];
	}
	cout<<"\nProcess\t\tBurst time\t\tWaiting time\t\tTurnaround time";
	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<p[i]<<"\t\t\t"<<bt[i]<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i];
	}
	cout<<"\nAverage waiting time = "<<(float)avgw/n;
	cout<<"\nAverage turnaround time = "<<(float)avgt/n;
	return 0;
}
