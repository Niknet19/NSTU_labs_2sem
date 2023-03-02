#include <stdio.h>
#include "list.h"
#define N 10

int main()
{
	int arr[N]={1,2,3,4,5,6,7,8,9,10};
	Node* head= createList(arr,N);
	printf("List size:%d", listSize(head));
	//insertListPos(&head,1111,13);
	deletePos(&head,9);
	//deleteAllEquals(head);
	printList(head);
	return 0;
}
