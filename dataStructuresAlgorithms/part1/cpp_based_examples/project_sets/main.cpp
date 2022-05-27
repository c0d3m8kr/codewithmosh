#include <iostream>
#include <string>
#include <set>

int main() {
    std::set<int> hashSet;
    int numbers[] = {1, 2, 3, 3, 2, 1, 4};

    for (auto index : numbers) {
        hashSet.insert(index);
    }

    for (auto index : hashSet) {
        std::cout << index << std::endl;
    }
    std::cout << std::endl;

    for (auto itr = hashSet.begin(); itr != hashSet.end(); itr++) {
        std::cout << *itr << std::endl;
    }

    return 0;
}
