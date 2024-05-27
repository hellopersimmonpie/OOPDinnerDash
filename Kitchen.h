#pragma once

#include <unordered_set>
#include <iostream>
class Kitchen{

	private:
		std::unordered_set <char> orders;

	public:
		char getOrder(char input);
		void setOrder(char input);
		void removeOrder(char input);
		void update(char input);
};

