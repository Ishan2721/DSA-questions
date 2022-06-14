#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
	int rollno;
	float marks;
	node * next;
};
int main()
{
	int n;
	node *start=NULL, *temp;
	cout<<"Enter the number of students: ";
	cin>>n;
	for(int i=0; i<n;i++){
		temp=new node();
		cout<<"\nRoll no: ";
		cin>>temp->rollno;
		cout<<"\nMarks: ";
		cin>>temp->marks;
		temp->next=NULL;
		if(i==0){
			start=temp;
		}
		else{
			temp->next=start;
			start=temp;
		}
	}
	while(temp!=NULL){
		cout<<"\n----STUDENT DETAILS----";
		cout<<"\nRoll no: "<<temp->rollno;
		cout<<"\nMarks: "<<temp->marks;
		temp=temp->next;
	}
	return 0;
}
