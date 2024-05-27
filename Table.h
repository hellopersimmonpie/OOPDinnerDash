#pragma once
class Table{
	private:
		int customerCount;
		int status = 0;

	public:
		void setCustomerCount(int count);
		int getCustomerCount();
		void setStatus(int s);
		int getStatus();
};

