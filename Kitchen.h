#pragma once

#include <unordered_set>
class Kitchen{

	private:
		std::unordered_set <char> orders;

	public:
		char getOrder();
		void setOrder(char input);
};

