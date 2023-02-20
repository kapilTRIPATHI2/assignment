
#include<iostream>
#include <cmath>
using namespace std;

/* Linked list node */
class Node {
  public:
	int data;
	Node* next;
};


Node* newNode(int data)
{
	Node* new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

int GetLen(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}
Node* RootNode(Node* head, int k){
     Node* temp = head;
    int count = 0;
    while(count<(k-1)){
        count++;
        temp = temp -> next;
    }
    return temp;
}


int main()
{
	Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(5);
	int z = sqrt(GetLen(head));
	Node* ans = RootNode(head, z);
	cout<<ans->data;
	return 0;
}