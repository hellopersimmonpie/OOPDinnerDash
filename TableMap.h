#ifndef TABLE_MAP_H
#define TABLE_MAP_H

#include <unordered_map>
#include "Table.h"

class TableMap {
private:
    std::unordered_map<int, Table> tables;  // Map of Table objects

public:
    // Add a table to the map
    void addTable(int table_id, const Table& table);

    // Get a table by its ID
    Table getTable(int table_id) const;

    // Update the status of a table by its ID
    void updateTableStatus(int table_id, int status);

    // Remove a table by its ID
    void removeTable(int table_id);

    // Display all tables and their statuses
    void displayTables() const;
};

#endif