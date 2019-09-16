#include<bits/stdc++.h>
using namespace std;

struct node 
{
	int data;
	struct node* next;

};


void deleteNode(node**);
node* create();
void printlist(node*);
node* getTail(node*);
node* push(node*);

int main()
{

cout << "Enter the elements" << endl;
cout << "Enter 0 to exit..." << endl;

struct node* head = create();
struct node* tail = getTail(head);
tail = push(tail);

cout << tail->data << endl;

printlist(head);

deleteNode(&head);

printlist(head);


return 0;


}

node* create()
{

struct node* head;
struct node* new_node;
struct node* temp;
int value;

head = NULL;
temp = NULL;

cin >> value;

//Creating the remaining body of linked list
while (value != 0)
{


new_node = new node();


new_node->data = value;
new_node->next = NULL;


if (head == NULL){

head = new_node;
temp = new_node;

}

else
{
temp->next = new_node;
temp = new_node;
}

cin >> value;
}
return head;
}


void printlist(node* n){

if (n == NULL){
cout << "List empty";
}

while(n != NULL){
	cout << n->data << " ";
	n=n->next;
	}
	cout << endl;
} 

node* getTail(node* head){

while(head->next != NULL){
head = head->next;
}

return head;
}

node* push(node* n){

int val;
struct node* tail;

cout << "Enter the element to be added to list..."<< endl;
cin >> val;

tail = new node();

tail->data = val;
tail->next = NULL;
n->next = tail;

return tail;
}

void deleteNode(node** headRef)
{
node* curr = *headRef;
node* temp;

while(curr !=NULL)
{
temp = curr->next;
free(curr);
curr = temp;
}

*headRef = NULL;
}





