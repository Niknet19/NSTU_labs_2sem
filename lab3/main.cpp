#include <iostream>
#include "Circle.h"
using std::cout,std::endl;


int main()
{
	try {
		Circle c1{1,1,3,GREEN,RED};
		Circle c2{2,2,3,BLUE,WHITE};
	}
	catch (const std::exception& e) {
		cout<<e.what()<<endl;
	}
	return 0;
}
