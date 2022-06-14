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
	node *start=NULL,*s,*temp;
	cout<<"Enter the number of nodes: ";
	cin>>n;
	for(int i=0;i<n;i++){
		temp=new node();
		cout<<"\nValue: ";
		cin>>temp->item;
		temp->prev=NULL;
		temp->next=NULL;
		if(start==NULL){
			start=temp;
		}
		else{
			s=start;
			while(s->next!=NULL){
				s=s->next;
			}
			s->next=temp;
			temp->prev=s;
		}
		
	}
	cout<<"\nThe doubly linked list:\n";
	node *p=start;
	while(p!=NULL){
		cout<<p->item<<" ";
		p=p->next;
	}
	node *q=start,*t;
	while(q!=NULL){
		node *p=q->next;
		if(q->next==NULL)
		start=q;
		t=q->prev;
		q->prev=q->next;
		q->next=t;
		q=p;
	}
	
	cout<<"\nReversed DLL: ";
	node *sT=start;
	while(sT!=NULL){
		cout<<sT->item<<" ";
		sT=sT->next;
	}
}
