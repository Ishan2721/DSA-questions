#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
	int item;
	node *prev;
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
		}
		
	}
	node *pT=new node();
	cout<<"\nEnter the value you want to insert:";
	cin>>pT->item;
	cout<<"\nEnter the value after which you want to insert:";
	cin>>value;
	if(last->item==value){
		pT->next=last->next;
		last->next=pT;
		last=pT;
	}
	node *t=last;
	do{
		if(t->item==value)
		break;
		t=t->next;
	} while(t!=last);
	if(t==last)
	cout<<"\nInsertion not possible";
	else
	{
		pT->next=t->next;
		t->next=pT;
	}
	
}
