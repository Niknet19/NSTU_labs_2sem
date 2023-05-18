#include "DishwasherMachine.h"
DishwasherMachine::DishwasherMachine(const std::string &manufacturer,
									 const std::string &drying_type,
									 const std::string &model,
									 double loadingWeight,
									 double price): HouseholdAppliances(manufacturer,model,price)
{
	this->loading_weight=loadingWeight;
	this->drying_type=drying_type;
}

const std::string &DishwasherMachine::getDrying_type() const
{
	return drying_type;
}
double DishwasherMachine::getLoading_weight() const
{
	return loading_weight;
}
void DishwasherMachine::setDrying_type(const std::string &dryingType)
{
	drying_type = dryingType;
}
void DishwasherMachine::setLoading_weight(double loadingWeight)
{
	loading_weight = loadingWeight;
}
void DishwasherMachine::print(std::ostream &os) const
{
	os <<"\nDishwasher machine info: ";
	HouseholdAppliances::print(os);
	os <<" drying_type: " << this->drying_type
	  << " loading_weight: " << this->loading_weight<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const DishwasherMachine &machine)
{
	//os <<"\nDishwasher machine info: ";
	//static_cast<const HouseholdAppliances &>(machine).print(os);
	machine.print(os);
	return os;
}

