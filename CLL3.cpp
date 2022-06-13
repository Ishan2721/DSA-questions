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
	if(last==NULL)
	cout<<"\nList empty cannot delete !";
	if(last->next=last)
	delete(last);
	else{
		node *t=last->next;
		last->next=t->next;
		delete(t);
	}
}
