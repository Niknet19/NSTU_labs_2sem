#include "WashingMachine.h"
#include "LinkedList.h"
int main()
{
	/*Washingmachine *wmachine1 = NULL,*wmachine2=NULL,*wmachine3;
	wmachine1=initStructDynamic("BOSH","BCV-764",32000,1200);
	wmachine2=initStructDynamic("SAMSUNG","VFD-343",29000,1000);
	wmachine3 = initStructDynamic("ARISTON","YTR-875",20000,900);
	//printStructInfo(wmachine1);
	List* head=NULL;
	addToSortedList(&head,wmachine1);
	addToSortedList(&head,wmachine2);
	addToSortedList(&head,wmachine3);
	printList(head);
	//printf("%f", getPos(head,0)->data->price);
	deletePos(&head,0);
	printList(head);
	/*printStructInfo(&wmachine2);
	printf("Equal: %d\n", isEqual(&wmachine1,&wmachine2));
	printf("Left bigger than right: %d\n", isBigger(&wmachine1,&wmachine2));*/
	listTest();
	return 0;
}
