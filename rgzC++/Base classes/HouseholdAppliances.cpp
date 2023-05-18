#include "HouseholdAppliances.h"
HouseholdAppliances::HouseholdAppliances(const std::string &manufacturer, const std::string &model, double price)
	: manufacturer(manufacturer), model(model), price(price)
{}
const std::string &HouseholdAppliances::getManufacturer() const
{
	return manufacturer;
}
void HouseholdAppliances::setManufacturer(const std::string &manufacturer)
{
	HouseholdAppliances::manufacturer = manufacturer;
}
const std::string &HouseholdAppliances::getModel() const
{
	return model;
}
void HouseholdAppliances::setModel(const std::string &model)
{
	HouseholdAppliances::model = model;
}
double HouseholdAppliances::getPrice() const
{
	return price;
}
void HouseholdAppliances::setPrice(double price)
{
	HouseholdAppliances::price = price;
}

void HouseholdAppliances::print(std::ostream &os) const
{
	if(typeid(*this)== typeid(HouseholdAppliances))os<<"HouseholdAppliances info: ";
	os <<"\n" <<"manufacturer: " << this->manufacturer << " model: " << this->model << " price: "
	   << this->price<<"\n";
}

std::ostream &operator<<(std::ostream &os, const HouseholdAppliances &appliances)
{
	appliances.print(os);
	return os;
}


