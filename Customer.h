#pragma once
class Customer {
protected:
	int customerCount;
	int customerPatienceLevel;

public:
	void setCustomerCount(int numberOfCustomers);
	int getCustomerCount();
	void setCustomerPatienceLevel();
	int getCustomerPatienceLevel();
	virtual void PatienceLevelDecrement() = 0;
};