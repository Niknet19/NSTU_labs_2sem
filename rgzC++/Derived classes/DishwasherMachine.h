#ifndef DISHWASHERMACHINE_H
#define DISHWASHERMACHINE_H
#include <iostream>
#include "../Base classes/HouseholdAppliances.h"
class DishwasherMachine: public HouseholdAppliances
{
	std::string drying_type;
	double loading_weight;
public:
	~DishwasherMachine() override=default;
	void print(std::ostream& os) const override;
	friend std::ostream &operator<<(std::ostream &os, const DishwasherMachine &machine);
	explicit DishwasherMachine(const std::string &manufacturer="Unknown",const std::string& drying_type="Unknown", const std::string &model="Unknown", double loadingWeight=0, double price=0);
	const std::string &getDrying_type() const;
	double getLoading_weight() const;
	void setDrying_type(const std::string &dryingType);
	void setLoading_weight(double loadingWeight);

};


#endif //DISHWASHERMACHINE_H
