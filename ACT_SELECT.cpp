#include<iostream>
#include<algorithm>
using namespace std;
struct Activity{
	int start,finish;
};
int comp(Activity a1,Activity a2)
{
	return(a1.finish<a2.finish);
}
void act_sequence(Activity a[],int n)
{
	sort(a,a+n,comp);
	int i=0;
	cout<<"Sequence of activities :"<<i<<" ";
	for(int j=1;j<=n;j++)
	{
		if(a[j].start>a[i].finish)
		{
			cout<<j<<" ";
			i=j;
		}
		
	}
	
}
int main()
{
	int n=6;
	Activity a[]={{5,9},{1,2},{3,4},{0,6},{5,7},{8,9}};
	act_sequence(a,n);
}
