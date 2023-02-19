#include <stdio.h>
#include "list.h"
#define N 10

int main()
{
	int arr[N]={1,2,3,4,5,6,7,8,9,10};
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
	return 0;
}
