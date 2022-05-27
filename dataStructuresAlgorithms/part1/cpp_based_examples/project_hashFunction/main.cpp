#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include "HashEmployee.h"

int hash(std::string id);

int main() {
    std::map<int, std::string> employeeMap;             // <key, value>
    std::string id = "123456-A";
    employeeMap.insert(std::pair<int, std::string>(hash(id), "Mosh"));

    for (auto index = employeeMap.begin(); index != employeeMap.end(); index++) {
        std::cout << index->first << " - " << index->second << std::endl;
    }

    return 0;
}

int hash(std::string id) {
    int total = 0;
    for (auto index : id) {
        total += (int)index;
    }
    std::cout << "Hash code: " << total % 100 << std::endl;
    return total % 100;
}