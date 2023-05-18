#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H
#include <iostream>
#include "../Base classes/HouseholdAppliances.h"


class WashingMachine: public HouseholdAppliances
{

double loading_weight;
int RPM;
public:
	~WashingMachine() override=default;
	void print(std::ostream& os) const override;
	friend std::ostream &operator<<(std::ostream &os, const WashingMachine &machine);
	void setLoading_weight(double loadingWeight);
	void setRPM(int rpm);
	double getLoading_weight() const;
	int getRPM() const;
	explicit WashingMachine(const std::string &manufacturer="Unknown", const std::string &model="Unknown", double loadingWeight=100, int rpm=0,double price=0);

};


#endif //WASHINGMACHINE_H
