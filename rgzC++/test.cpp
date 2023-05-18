#include <list>
#include "Test.h"
#include <memory>
void smartPointersTest(){
	std::string input;
	std::list<std::unique_ptr<HouseholdAppliances>> list;
	for (;;) {
		input.clear();
		std::cout<<"COMMANDS: ADD MACHINE, ADD DMACHINE, ADD WMACHINE, EXIT, PRINT\n";
		std::cout<<"ENTER COMMAND...";
		std::cin>>input;
		if(input=="EXIT"){
			list.clear();
			break;
		}


		if(input=="M"){
			std::string manufacturer;
			std::string model;
			double price;
			std::cin>>manufacturer>>model>>price;
			list.emplace_back(new HouseholdAppliances{manufacturer,model,price});
		}

		if(input=="W"){
			std::string manufacturer;
			std::string model;
			double loadingWeight;
			int RPM;
			double price;
			std::cin>>manufacturer>>model>>price>>loadingWeight>>RPM;
			list.emplace_back(new WashingMachine{manufacturer,model,loadingWeight,RPM,price});
		}

		if(input=="D"){
			std::string manufacturer;
			std::string model;
			double loadingWeight;
			std::string drying_type;
			double price;
			std::cin>>manufacturer>>model>>price>>loadingWeight>>drying_type;
			list.emplace_back(new DishwasherMachine{manufacturer,drying_type,model,loadingWeight,price});
		}

		if(input=="PRINT"){
			for (auto& listelement:list) {
					listelement->print(std::cout);
			}
		}

	}

};

void test(){
	std::string input;
	//HouseholdAppliances machine{"Samsung","768t",23422};
	//WashingMachine wmachine{"ARISTON","UIO736",120,1200,27900};
	//DishwasherMachine dmachine{"BOSH","TURBO","NHGT-564",40,23980};
	std::list<HouseholdAppliances*> list;
	for (;;) {
		input.clear();
		std::cout<<"COMMANDS: ADD MACHINE, ADD DMACHINE, ADD WMACHINE, EXIT, PRINT\n";
		std::cout<<"ENTER COMMAND...";
		std::cin>>input;
		if(input=="EXIT"){
			for (auto ptr:list) {
				delete ptr;
				ptr= nullptr;
			}
			list.clear();
			break;
		}


		if(input=="M"){
			std::string manufacturer;
			std::string model;
			double price;
			std::cin>>manufacturer>>model>>price;
			list.emplace_back(new HouseholdAppliances{manufacturer,model,price});
		}

		if(input=="W"){
			std::string manufacturer;
			std::string model;
			double loadingWeight;
			int RPM;
			double price;
			std::cin>>manufacturer>>model>>price>>loadingWeight>>RPM;
			list.emplace_back(new WashingMachine{manufacturer,model,loadingWeight,RPM,price});
		}

		if(input=="D"){
			std::string manufacturer;
			std::string model;
			double loadingWeight;
			std::string drying_type;
			double price;
			std::cin>>manufacturer>>model>>price>>loadingWeight>>drying_type;
			list.emplace_back(new DishwasherMachine{manufacturer,drying_type,model,loadingWeight,price});
		}

		if(input=="PRINT"){
			for (auto listelement:list) {
				std::cout<<*listelement<<std::endl;
			}
		}

	}
};