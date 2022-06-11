#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,h,w;
	    cin>>n>>h>>w;
	    int mx=n*max(h,w);
	    int min=0;
	    while(min<mx&&(mx-min)>1)
	    {
	        int mid=(min+mx)/2;
	        if((mid/h)*(mid/w)>=n)
	        mx=mid;
	        else
	        min=mid;
	    }
	    cout<<mx;
	    
	}
	//cout<<mx;
	return 0;
}

