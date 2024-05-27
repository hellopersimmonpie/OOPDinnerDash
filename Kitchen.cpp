#include "Kitchen.h"

char Kitchen::getOrder(char input){
	if (orders.find(input) != orders.end())
		return input;
	else {
		std::cout << "Data yang dicari tidak ada" << std::endl;
		return 0;
	}
}

void Kitchen::setOrder(char input){
	if (orders.find(input) == orders.end())
		std::cout << "Data sudah ada" << std::endl;
	else
		orders.insert(input);
}

void Kitchen::removeOrder(char input){
	orders.erase(input);
}

void Kitchen::update(char input){
	setOrder(input);
}
