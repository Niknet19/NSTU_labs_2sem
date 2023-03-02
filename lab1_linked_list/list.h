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

Node* createNewList(int value);

void popFront(Node** headRef);

Node *numOfOccurrences(Node *head, int value);

int deleteEquals(Node* headRef,int value);

int deleteAllEquals(Node* headRef);

void insertListPos(Node** headRef, int newValue, int pos);

void deletePos(Node** headRef, int pos);

int getListDataPos(Node* headRef,int pos);

Node* getListNodePos(Node* headRef,int pos);

int listSize(Node* headRef);

#endif //LIST_H