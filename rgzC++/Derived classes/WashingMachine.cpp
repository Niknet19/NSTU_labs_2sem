#include "WashingMachine.h"


WashingMachine::WashingMachine(const std::string &manufacturer,
							   const std::string &model,
							   double loadingWeight,
							   int rpm,
							   double price): HouseholdAppliances(manufacturer,model,price)
{
this->RPM=rpm;
this->loading_weight=loadingWeight;
}
double WashingMachine::getLoading_weight() const
{
	return loading_weight;
}
int WashingMachine::getRPM() const
{
	return RPM;
}
void WashingMachine::setLoading_weight(double loadingWeight)
{
	loading_weight = loadingWeight;
}
void WashingMachine::setRPM(int rpm)
{
	RPM = rpm;
}

std::ostream &operator<<(std::ostream &os, const WashingMachine &machine)
{
	machine.print(os);
	return os;
}
void WashingMachine::print(std::ostream &os) const
{
	os <<"\nWashing machine info: ";
	HouseholdAppliances::print(os);
	os <<" RPM: " << this->RPM
	   << " loading_weight: " << this->loading_weight<<std::endl;
}

