#include<iostream>
using namespace std;
class Node{
public:
 int data;
 Node* next;
};
bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
    if(temp == NULL){
        return false;
    }
    return false;
}
int main(){

}