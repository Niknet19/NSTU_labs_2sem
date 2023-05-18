#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "WashingMachine.h"
typedef struct List{
	Washingmachine *data;
	struct List* next;
}List;
void listTest();
void addToSortedList(List** head,Washingmachine* machine);
int listSize(List* head);
void printList(List* head);
void deletePos(List** head,int pos);
List* getPos(List* head,int pos);
int writeToFile(List* head);
int readFromFile(List** head);
#endif //LINKEDLIST_H
