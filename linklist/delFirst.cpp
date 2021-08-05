#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};
void printList( Node *head)
{
	Node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
Node *delFirst(Node *head)
{
	if(head==NULL)
	return NULL;
	else
	{
	Node *curr=head->next;
	delete(head);
	return curr;
   }
}
int main() {
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printList(head);
	head=delFirst(head);
	printList(head);
	return 0;
}
//output:10 20 30 
//       20 30 
