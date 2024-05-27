#include "TableMap.h"

void TableMap::setTable(char input, Table table){
	if (Tables.find(input) != Tables.end()) {
		Tables.insert({ input, table });
	}
	else {
		std::cout << "The Table has been set" << std::endl;
	}
}

Table TableMap::getTable(char input){
	return Tables.at(input);
}
