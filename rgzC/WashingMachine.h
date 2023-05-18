#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H
#include <string.h>
#include <stdio.h>
#include <malloc.h>
#define MANUFACTORER_NAME_LEN 20
#define MODEL_NAME_LEN 20

typedef struct Washingmachine{
	char manufactorer[MANUFACTORER_NAME_LEN];
	char model[MODEL_NAME_LEN];
	double price;
	int RPM;
}Washingmachine;

void initStruct(Washingmachine* machine,char* _manufactorer,char* _model,double _price,int _RPM);
Washingmachine* initStructDynamic(char* _manufactorer,char* _model,double _price,int _RPM);
void printStructInfo(Washingmachine* machine);
int isEqual(Washingmachine* leftArg,Washingmachine* rightArg);
int isBigger(Washingmachine* leftArg,Washingmachine* rightArg);
#endif //WASHINGMACHINE_H
