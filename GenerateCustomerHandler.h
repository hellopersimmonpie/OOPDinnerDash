#pragma once
#include "Handler.h"
#include "CustomerGenerator.h"
#include "Customer.h"
#include "CustomersQueue.h"

class GenerateCustomerHandler : public Handler {
	
	private:

	public:
		Handler* setNext(Handler* handler);
		void handle();
};

