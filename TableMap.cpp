#include "TableMap.h"
#include <iostream>

// Add a table to the map
void TableMap::addTable(int table_id, const Table& table) {
    tables[table_id] = table;
}

// Get a table by its ID
Table TableMap::getTable(int table_id) const {
    auto it = tables.find(table_id);
    if (it != tables.end()) {
        return it->second;
    }
    else {
        std::cerr << "Table ID " << table_id << " not found!" << std::endl;
        return Table();  // Return a default Table if not found
    }
}

// Update the status of a table by its ID
void TableMap::updateTableStatus(int table_id, int status) {
    auto it = tables.find(table_id);
    if (it != tables.end()) {
        it->second.setStatus(status);
    }
    else {
        std::cerr << "Table ID " << table_id << " not found!" << std::endl;
    }
}

// Remove a table by its ID
void TableMap::removeTable(int table_id) {
    tables.erase(table_id);
}

// Display all tables and their statuses
void TableMap::displayTables() const {
    for (const auto& pair : tables) {
        std::cout << "Table ID: " << pair.first
            << ", Status: " << pair.second.getStatusString() << std::endl;
    }
}