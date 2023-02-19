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


Node *numOfOccurrences(Node *head, int value)
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
int listSize(Node *headRef)
{
	Node *head = headRef;
	int cnt = 0;
	if (headRef == NULL)return 0;
	while (head != NULL) {
		cnt++;
		head = head->next;
	}
	return cnt;
}


int getListDataPos(Node *headRef, int pos)
{
	for (int i = 0; i < pos; ++i) {
		if(headRef==NULL)return -1;
		headRef=headRef->next;
	}
	return headRef->data;
}


Node* getListNodePos(Node* headRef,int pos){
	for (int i = 0; i < pos; ++i) {
		if(headRef==NULL)return NULL;
		headRef=headRef->next;
	}
	return headRef;
}


void insertListPos(Node **headRef,int newValue, int pos)
{
	if(pos==0){
		pushFront(headRef,newValue);
		return;
	}

	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data=newValue;
	temp->next = NULL;
	if((*headRef)==NULL) // ????
	{
		(*headRef) = temp;
		return;
	}
	else
	{
		Node* prev_ptr;
		Node* ptr = (*headRef);
		for(int i=0;i<pos;i++)
		{
			prev_ptr = ptr;//Храним указатели на текущий и предыдущий элемент списка
			ptr = ptr->next;
		}

		temp->next = ptr; //Вставляем между текущим и предыдущим

		prev_ptr->next = temp;
	}
}

void deletePos(Node **headRef, int pos)
{

if(headRef==NULL){
	printf("List is empty!\n");
	return;
}

if(pos==0){
	popFront(headRef);
	return;
}
	Node* prev_ptr;
	Node* ptr = (*headRef);
	for(int i=0;i<pos;i++)
	{
		prev_ptr = ptr;//Храним указатели на текущий и предыдущий элемент списка
		ptr = ptr->next;
	}

	//temp->next = ptr; //Вставляем между текущим и предыдущим
	//prev_ptr->next = temp;
	prev_ptr->next=ptr->next;
	free(ptr);
}

int deleteEquals(Node* headRef,int value){
	Node* prev_ptr;
	Node* ptr = headRef;
	int cnt=0;
	while(ptr!=NULL){
		if(ptr->data==value){
			if(cnt!=0){
			prev_ptr->next=ptr->next;
			free(ptr);
			ptr=prev_ptr->next;
				continue;
			}
			cnt++;
		}
		prev_ptr = ptr;
		ptr = ptr->next;
	}
}


int deleteAllEquals(Node *headRef)
{
	while (headRef!=NULL){
		deleteEquals(headRef,headRef->data);
		headRef=headRef->next;
	}
	return 0;
}


