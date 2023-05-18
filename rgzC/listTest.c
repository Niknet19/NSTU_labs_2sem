#include "WashingMachine.h"
#include "LinkedList.h"
#define FILENAME "list.bin"

int writeToFile(List* head){
	FILE *fp = fopen(FILENAME, "wb");
	if (fp == NULL) {
		perror("Error: Failed to open file.");
		fclose(fp);
		return 0;
	}
	printf("Saving to file!");
	while (head != NULL) {
		fwrite(head->data, sizeof(Washingmachine), 1, fp);//Пишем в файл
		head = head->next;
	}
	fclose(fp);
	return 1;
}

int readFromFile(List** head){
	FILE *fp = fopen(FILENAME, "rb");//Открываем для чтения в бинарном режиме
	if (fp == NULL) {//Проверяем открылся ли файл
		perror("Error: Failed to open file.");
		fclose(fp);
		return 0;
		}

	while (fp) {
		Washingmachine *m = (Washingmachine *)malloc(sizeof(Washingmachine));
		if (fread(m, sizeof(Washingmachine), 1, fp) != 1) {//Считываем структуру и проверяем конец ли файла
			free(m);
			break;
		};
		printf("read from file!\n");
		//printStructInfo(m);
		addToSortedList(head, m);//Добавления в список, замени на свою функцию
	}
	fclose(fp);
	return 1;
}

void listTest()
{
	char str[20];
	List* head=NULL;
	readFromFile(&head);
	for (;;){
		printf("COMMANDS: ADD,DELETE,PRINT,EXIT.\n");
		rewind(stdin);
		fgets(str,20,stdin);
		printf("%s",str);

		if(strcmp("ADD\n",str)==0){
			printf("ENTER INFORMATION: \n");
			char manufactorer[MANUFACTORER_NAME_LEN];
			char model[MODEL_NAME_LEN];
			double price;
			int RPM;
			fgets(manufactorer,MANUFACTORER_NAME_LEN,stdin);
			manufactorer[strcspn(manufactorer, "\n")] = 0;
			fgets(model,MODEL_NAME_LEN,stdin);
			model[strcspn(model, "\n")] = 0;
			scanf("%lf",&price);
			scanf("%d",&RPM);
			Washingmachine *wmachine= initStructDynamic(manufactorer,model,price,RPM);
			addToSortedList(&head,wmachine);
		}

		if(strcmp("PRINT\n",str)==0){
			printList(head);
		}
		if(strcmp("DELETE\n",str)==0){
			int n;
			printf("Enter pos: ");
			scanf("%d",&n);
			deletePos(&head,n);
		}
		if(strcmp("EXIT\n",str)==0){
			writeToFile(head);
			break;
		}
	}

	while (head!=NULL){
		List* temp=head;
		free(temp->data);
		head=head->next;
		free(temp);
		}
}


