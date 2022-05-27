#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

int main() {

    std::string sentence = "a green apple";
    int temp;
    int smallest;
    char nonRepeat;

    std::unordered_map<char, int> alphaCount = {};

    for (char character : sentence) {
        auto search = alphaCount.find(character);
        if (search == alphaCount.end()){
            alphaCount.insert(std::pair<char, int>(character, 1));
        }
        else {
            alphaCount[character] += 1;
        }
    }

    for (auto character : sentence) {
        if (character >= 97 && character <= 122){
            if (alphaCount[character] == 1) {
                nonRepeat = character;
                break;
            }
        }
    }

    /*
    for (auto character : alphaCount) {
        std::cout << character.first << " - " << character.second << std::endl;
    }
    */

    std::cout << "First non-repeating character: " << nonRepeat << std::endl;

    return 0;
}
