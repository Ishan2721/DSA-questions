#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	int n;
	cout<<"Enter number of nodes :";
	cin>>n;
	node *start=NULL,*temp;
	for(int i=0;i<n;i++){
		temp=new node();
		cin>>temp->data;
		temp->next=NULL;
		if(i==0){
			start=temp;
		}
		else{
			temp->next=start;
			start=temp;
		}
	}
	cout<<"\nOriginal list :";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	node *prevnode,*currnode,*nextnode;
	prevnode=NULL;
	currnode=nextnode=start;
	while(nextnode!=NULL){
		nextnode=nextnode->next;
		currnode->next=prevnode;
		prevnode=currnode;
		currnode=nextnode;
	}
	cout<<"\nReversed list :";
	start=prevnode;
	node *p=start;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
