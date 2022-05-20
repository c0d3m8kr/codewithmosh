#include <iostream>
#include "Expression.h"
#include <stdexcept>

int main() {
    // edge cases:
    // 1. (
    // 2. (( )
    // 3. ( ))
    // 4. ) (
    std::string str1 = "(1 + 2)";       // balanced
    std::string str2 = "((1 + 2)";      // edge case 2;
    std::string str3 = "((1 + 5)))";    // edge case 3;
    std::string str4 = "(<1 + 1>)";     // balanced, multi brackets
    std::string str5 = "(1 + 1";        // edge case 1;
    std::string str6 = ")1 + 1(";       // edge case 4;
    std::string str7 = "(2 + 8>";       // edge case 5;

    Expression* start = nullptr;
    Expression* last = nullptr;


    char* char_array = &str1[0];     // link string as char pointer from above

    Expression* expression1 = new Expression(str1);
    start = expression1;

    Expression* expression2 = new Expression(str2);
    expression1->next = expression2;
    last = expression2;

    Expression* expression3 = new Expression(str3);
    expression2->next = expression3;
    last = expression3;

    Expression* expression4 = new Expression(str4);
    expression3->next = expression4;
    last = expression4;

    Expression* expression5 = new Expression(str5);
    expression4->next = expression5;
    last = expression5;

    Expression* expression6 = new Expression(str6);
    expression5->next = expression6;
    last = expression6;

    Expression* expression7 = new Expression(str7);
    expression6->next    = expression7;
    last = expression7;

    try {
        std::cout << std::boolalpha << "str1 is balanced: "
                << expression1->isBalanced() << std::endl;
        std::cout << std::boolalpha << "str2 is balanced: "
                << expression2->isBalanced() << std::endl;
        std::cout << std::boolalpha << "str3 is balanced: "
                << expression3->isBalanced() << std::endl;
        std::cout << std::boolalpha << "str4 is balanced: "
                << expression4->isBalanced() << std::endl;
        std::cout << std::boolalpha << "str5 is balanced: "
                << expression5->isBalanced() << std::endl;
        std::cout << std::boolalpha << "str6 is balanced: "
                << expression6->isBalanced() << std::endl;
        std::cout << std::boolalpha << "str7 is balanced: "
                << expression7->isBalanced() << std::endl;
    }
    catch (const char* edgeCaseException) {
        std::cout << "[Error]" << std::endl
                << "Edge Case Detected: " << edgeCaseException << std::endl;
    }

    // Delete memory;
    Expression* node = start;
    Expression* temp = NULL;
    while (node != NULL){
        temp = node->next;
        delete node;
        node = temp;
    }

    return 0;
}
