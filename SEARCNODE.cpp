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
	temp=start;
	int num,flag=0,i=1;
	cout<<"\nEnter the number you want to search :";
	cin>>num;
	while(temp!=NULL){
		if(temp->data==num)
		{
			flag=1;
			i++;
		}
		temp=temp->next;
	}
	if(flag==1)
	cout<<"\nElement found at position "<<i<<" !";
	else
	cout<<"\nNot found :(";
	}	
