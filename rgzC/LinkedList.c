#include "LinkedList.h"
#include <malloc.h>
void addToSortedList(List **head, Washingmachine *_machine)
{
	List * new_node= (List*)malloc(sizeof(List));
	new_node->data=_machine;
	new_node->next = NULL;

	List * current;
	/* Special case for the head end */
	if (*head == NULL
		|| isBigger((*head)->data
			,new_node->data)) {
		new_node->next = *head;
		*head = new_node;
	}
	else {
		/* Locate the node before
the point of insertion */
		current = *head;
		while (current->next != NULL
			&& !isBigger(current->next->data, new_node->data)) {
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}

}

int listSize(List *head)
{
	int size=0;
	List * current=head;
	while (current!=NULL){
		current=current -> next;
		++size;
	}
	return size;
}

void printList(List *head)
{
	if (head == NULL) {
		printf("Empty!\n");
	}
	List * current=head;
	while (current!=NULL){
		printStructInfo(current->data);
		current=current -> next;
	}
}
void deletePos(List **head, int pos)
{
	if (*head == NULL) {
		return;
	}
	List* temp = *head;
	if (pos == 0) {
		*head = temp->next;
		free(temp);
		return;
	}
	for (int i = 0; temp != NULL && i < pos - 1; i++) {
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL) {
		return;
	}
	List* next = temp->next->next;
	free(temp->next);
	temp->next = next;
}

List* getPos(List *head, int pos)
{
	if (head == NULL) {
		return NULL;
	}
	List* temp = head;
	for (int i = 0; temp != NULL && i < pos - 1; i++) {
		temp = temp->next;
	}
	return temp;
}
