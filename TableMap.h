#pragma once
#include <unordered_map>
#include <iostream>
#include "Table.h"
#include "Kitchen.h"

class TableMap{
	private:
		std::unordered_map<char, Table> Tables;
	
	public:
		void setTable(char input, Table table);
		Table getTable(char input);
};

