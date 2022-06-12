#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
	int item;
	node *next;
};
int main()
{
	int n, value;
	node *last=NULL,*p;
	cout<<"Enter the number of nodes: ";
	cin>>n;
	for(int i=0;i<n;i++){
		p=new node();
		cout<<"\nValue: ";
		cin>>p->item;
		if(last==NULL){
			last=p;
			last->next=last;
		}
		else
		{
			p->next=last->next;
			last->next=p;
			last=p;
		}
		
	}
	node *pt=last->next;
	int c=0;
	do{
		cout<<pt->item<<" ";
		c++;
		pt=pt->next;
	}while(pt!=last->next);
	/*node *start=last->next;
	node *p1=start;
	int flag=0;
	while(p1!=NULL){
		if(p1->next==start){
			flag=1;
			break;
		}
		p1=p1->next;
	}
	if(flag==1)
	cout<<"\nCircular !";
	else
	cout<<"\nNot circular !";*/
	cout<<"\nNumber of nodes="<<c;
}
