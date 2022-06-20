#include<iostream>
#include<algorithm>
using namespace std;
struct Activity{
	int j_no,d_line,profit;
};
int comp(Activity a1,Activity a2)
{
	return(a1.profit>a2.profit);
}
void act_sequence(Activity a[],int n)
{
	sort(a,a+n,comp);
	int res[n],slot[n];
	for(int i=0;i<n;i++)
	slot[i]=0;
	cout<<"Sequence of jobs:";
	for(int i=0;i<n;i++)
	{
		for(int j=min(n,a[i].d_line)-1;j>=0;j--)
		{
			if(slot[j]==0)
			{
				res[j]=a[i].j_no;
				slot[j]=1;
				break;
			}
		}
		
	}
	for(int i=0;i<n;i++){
		if(slot[i])
		cout<<res[i]<<" ";
	}
	
}
int main()
{
	int n;
	Activity a[]={{1,5,9},{2,1,2},{3,3,4},{4,1,6},{5,5,7},{6,8,9}};
	n=sizeof(a)/sizeof(a[0]);
	act_sequence(a,n);
}
