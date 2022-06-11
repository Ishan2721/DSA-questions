#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void max_bot(int a[],int num,int cap)
{
	int count=0;
	for(int i=0;i<num;i++)
	{
        if(a[i]<cap)
		{
			count++;
			cap-=a[i];
		}
	}
	cout<<count<<endl;
}
int main() {
	int t;
	cin >> t;    //Reading input from STDIN
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		max_bot(a,n,x);
	}
}
