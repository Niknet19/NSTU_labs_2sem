#ifndef HOUSEHOLDAPPLIANCES_H
#define HOUSEHOLDAPPLIANCES_H
#include <iostream>


class HouseholdAppliances
{
	std::string manufacturer;
	std::string model;
	double price;
public:
	virtual ~HouseholdAppliances()=default;
	explicit HouseholdAppliances(const std::string &manufacturer="Unknown", const std::string &model="Unknown", double price=0);
	const std::string &getManufacturer() const;
	void setManufacturer(const std::string &manufacturer);
	const std::string &getModel() const;
	void setModel(const std::string &model);
	double getPrice() const;
	void setPrice(double price);
	virtual void print(std::ostream& os) const;
	friend std::ostream &operator<<(std::ostream &os, const HouseholdAppliances &appliances);
};


#endif //HOUSEHOLDAPPLIANCES_H
