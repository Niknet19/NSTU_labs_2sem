#include "WashingMachine.h"
#include "WashingMachine.h"

void initStruct(Washingmachine* machine,char* _manufactorer,char* _model,double _price,int _RPM){
	if(_manufactorer!=NULL && strlen(_manufactorer)!=0)strncpy(machine->manufactorer,_manufactorer,MANUFACTORER_NAME_LEN);
	else strncpy(machine->manufactorer,"UNKNOWN",MANUFACTORER_NAME_LEN);
	if(_model!=NULL&& strlen(_model)!=0)strncpy(machine->model,_model,MODEL_NAME_LEN);else
		strncpy(machine->model,"UNKNOWN",MODEL_NAME_LEN);
	if(_price>=0)machine->price=_price;else machine->price=0;
	if(_RPM>=0)machine->RPM=_RPM;else machine->RPM=0;
}
void printStructInfo(Washingmachine *machine)
{
	printf("Manufactorer: %s\n",machine->manufactorer);
	printf("Model: %s\n",machine->model);
	printf("Price: %f\n",machine->price);
	printf("RPM: %d\n\n",machine->RPM);
}
int isEqual(Washingmachine *leftArg, Washingmachine *rightArg)
{
	return (!strcmp(leftArg->manufactorer,rightArg->manufactorer)&& !strcmp(leftArg->model,rightArg->model)&&
	leftArg->price==rightArg->price&&leftArg->RPM==rightArg->RPM);
}
int isBigger(Washingmachine *leftArg, Washingmachine *rightArg)
{
	return(leftArg->price>=rightArg->price);
}
Washingmachine* initStructDynamic(char *_manufactorer, char *_model, double _price, int _RPM)
{
	Washingmachine *machine=(Washingmachine*)malloc(sizeof(Washingmachine));
	if(_manufactorer!=NULL && strlen(_manufactorer)!=0)strncpy(machine->manufactorer,_manufactorer,MANUFACTORER_NAME_LEN);
	else strncpy(machine->manufactorer,"UNKNOWN",MANUFACTORER_NAME_LEN);
	if(_model!=NULL&& strlen(_model)!=0)strncpy(machine->model,_model,MODEL_NAME_LEN);else
		strncpy(machine->model,"UNKNOWN",MODEL_NAME_LEN);
	if(_price>=0)machine->price=_price;else machine->price=0;
	if(_RPM>=0)machine->RPM=_RPM;else machine->RPM=0;
	return machine;
}

