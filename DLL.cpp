#include<iostream>
using namespace std;
struct linklist
{
	struct linklist *prev;
	int item;
	struct linklist *next;
};
typedef struct linklist node;
node * top=NULL;
int main(){
	int ch;
	void push();
	void pop();
	void print();
	do{
		cout<<"Enter choice:";
		switch(ch)
		{
			case 1: push();break;
			case 2: pop();break;
			case 3: print(); break;
			case 4: break;
		}
	}while(ch!=4);
};
void push(){
	node* newnode;
	
    newnode = new node();

    if(!newnode){
        cout << "Overflow" << endl;
    }
    newnode->next= top;
    cin>>newnode->item;  
    newnode->prev = NULL;
    top = newnode;
	
}
void pop(){
	
}
void print(){
	node *p=top;
	while(p!=NULL)
	{
		cout<<p->item;
		p=p->next;
	}
}
