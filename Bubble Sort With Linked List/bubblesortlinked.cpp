#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

void data(Node*& head, int value){
	Node* newnode = new Node();
	newnode->data = value;
	newnode->next = NULL;

	if(head == NULL){
		head = newnode;
	}
	else{
		Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
}

void tampil(Node* head){
	Node* temp = head;
	while(temp->next != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

void tukar(Node* a, Node* b){
	int temp = a->data;
	a->data = b->data;
	b->data = temp;
}

void bubble(Node* head){
	if(head == NULL || head->next == NULL){
		return;
	}

	bool swapped;
	Node* curr;
	Node* last = NULL;

	do{
		swapped = false;
		curr = head;

		while(curr->next != NULL){
			if(curr->data > curr->next->data){
				tukar(curr, curr->next);
				swapped = true;
			}
			curr = curr->next;
		}
		last = curr;
	}while(swapped);
}

int main(){
	Node* head = NULL;

	data(head, 12);
	data(head, 10);
	data(head, 19);
	data(head, 14);
	data(head, 16);
	data(head, 11);

	cout << "Linked list sebelum di sorting: " << endl;
	tampil(head);

	cout << "Linked list setelah di sorting: " << endl;
	bubble(head);
	tampil(head);
}
