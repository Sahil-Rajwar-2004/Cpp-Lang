#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;

		Node(int val){
			data = val;
			next = NULL;
		}
};

void insert_at_tail(Node* &head,int val){
	Node* n = new Node(val);
	if(head==NULL){
		head=n;
		return;
	}
	Node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}

void insert_at_head(Node* &head,int val){
	Node* n = new Node(val);
	n->next=head;
	head=n;
}

void display(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	Node* head=NULL;
	insert_at_tail(head,1);
	insert_at_tail(head,2);
	insert_at_tail(head,3);

	display(head);

	return 0;
}

