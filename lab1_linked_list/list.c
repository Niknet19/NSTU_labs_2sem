#include "list.h"


void pushFront(Node** headRef, int data){
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = *headRef;
	*headRef = temp;
}


Node* createList(int values[], int n){
	int i;
	Node* head = NULL;
	for (i = n - 1; i >= 0; i--) {
		pushFront(&head, values[i]);
	}

	return head;
}


void printList(Node* headRef){
	Node* curr=headRef;
	if(curr==NULL){
		printf("Empty!\n");
		return;
	}
	printf("\n");
	while (curr!=NULL){
		printf("%d->",curr->data);
		curr=curr->next;
	}
	printf("NULL");
}


void popFront(Node** headRef)
{
	if(headRef==NULL)
	{
		printf("Linked List is empty!\n");
		return;
	}
	Node* ptr = *headRef;
	(*headRef) = (*headRef)->next; // head node pointing to second node
	free(ptr); // deleting prev head node
}


Node *num_of_occurrences(Node *head, int value)
{
	Node *firstOccurrence = NULL;//Певрое вхожление элемента в список
	int cnt = 0;//Счетчик количества вхождений
	if (head == NULL)return NULL;

	while (head->next != NULL) {
		if (head->data == value) {
			if (firstOccurrence == NULL) {
				firstOccurrence = head;
			}
			cnt++;
		}
		head = head->next;
	}
	printf("\nNum of occurrences:%d\n", cnt);
	return firstOccurrence;
}
