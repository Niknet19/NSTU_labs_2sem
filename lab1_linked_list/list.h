#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}Node;

void printList(Node* headRef);

void pushFront(Node** headRef, int data);

Node* createList(int keys[], int n);

void popFront(Node** headRef);

Node *num_of_occurrences(Node *head, int value)



#endif //LIST_H
