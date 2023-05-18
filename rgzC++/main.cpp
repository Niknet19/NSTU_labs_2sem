#include <iostream>
#include "Derived classes/DishwasherMachine.h"
#include "Derived classes/WashingMachine.h"
#include "Test.h"

int main()
{
	/*DishwasherMachine dmachine{"BOSH","Turbo","XML-23",10,30000.99};
	WashingMachine wmachine{"SAMSUNG","AB43D",30,1000,36000.87};
	std::cout<<dmachine<<wmachine<<"\n";
	dmachine.setPrice(20000);
	wmachine.setPrice(30000);
	std::cout<<dmachine<<wmachine<<"\n";*/
	/*HouseholdAppliances machine{"Samsung","768t",23422};
	WashingMachine wmachine{"ARISTON","UIO736",120,1200,27900};
	//std::cout<<wmachine;
	DishwasherMachine dmachine{"BOSH","TURBO","NHGT-564",40,23980};
	HouseholdAppliances& baseptr=wmachine;
	//std::cout<<baseptr;
	baseptr.print(std::cout);*/


	//test();
	smartPointersTest();
	return 0;
}
