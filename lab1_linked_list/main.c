#include <stdio.h>
#include "list.h"
#define N 10

int main()
{
	int arr[N]={2,2,2,2,3,6,3,3,9,10};
	Node* listHead=createList(arr,N);
	pushFront(&listHead,111);
	printList(listHead);
	popFront(&listHead);
	printList(listHead);
	Node* node= numOfOccurrences(listHead, 2);
	insertListPos(&listHead,1111,10);
	printList(listHead);
	deletePos(&listHead,10);
	printList(listHead);
	//deleteEquals(listHead,2);
	deleteAllEquals(listHead);
	printList(listHead);
	return 0;
}
