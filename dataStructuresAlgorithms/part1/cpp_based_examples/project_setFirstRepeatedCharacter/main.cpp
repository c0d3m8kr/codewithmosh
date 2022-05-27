/*
 * Interview Question: First Repeated Character
 * Given: string = "green apple"
 * Want: find first repeated character!
 */

#include <iostream>
#include <string>
#include <set>

int main() {
    std::string word = "green apple";       // ee is repeated b2b
    std::string word2 = "rouge apple";      // pp is repeated b2b
    std::string word3 = "rouge park";       // r is repeated, diff pos.
    char prev = NULL;
    int count = 0;

    // detects first repeating back-to-back character
    for (auto index : word2) {
        if (index == prev){
            std::cout << "First repeating character: " << index << std::endl;
            break;
        }
        else{
            prev = index;
        }
    }

    // detects repeating character in arbitrary position
    std::set<char> findRepeating;

    for (auto index : word) {
        if (findRepeating.find(index) == findRepeating.end()){
            // means not found!
            findRepeating.insert(index);
        }
        else {
            // found!
            std::cout << "First repeating character is: " << index << std::endl;
            break;
        }
    }

    return 0;
}
