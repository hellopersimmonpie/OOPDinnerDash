#pragma once
#include <queue>
#include "Customer.h"

class CustomersQueue{
	private:
		std::queue<Customer*> customers;

	public:
		void Enqueue(Customer* customer);
		Customer* Dequeue();
};

