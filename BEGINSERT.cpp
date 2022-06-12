#include<iostream>
#include<stdio.h>
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
	cout<<"\nOld list"
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	temp=start;
	node *p;
	p=new node();
	cout<<"\nEnter the data of new node :";
	cin>>p->data;
	p->next=temp;
	temp=p;
	cout<<"\nNew list"<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
	
	return 0;
}
