// C++ program to find modular node in a linked list
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

/* Linked list node */
class Node {
  public:
	int data;
	Node* next;
};

/* Function to create a new node with given data */
Node* newNode(int data)
{
	Node* new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

/* Function to find modular node in the linked list */
Node* modularNode(Node* head, int k)
{
	// Corner cases
	if (k <= 0 || head == NULL)
		return NULL;

	// Traverse the given list
	int i = 1;
	Node* modularNode = NULL;
	for (Node* temp = head; temp != NULL; temp = temp->next) {
		if (i % k == 0)
			modularNode = temp;
		
		i++;
	}
	return modularNode;
}

int main()
{
	Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(5);
	int k = 2;
	Node* answer = modularNode(head, k);
	cout<<"Modular node is ";
	if (answer != NULL)
		cout<<answer->data;
	else
		cout<<"NULL";
	return 0;
}