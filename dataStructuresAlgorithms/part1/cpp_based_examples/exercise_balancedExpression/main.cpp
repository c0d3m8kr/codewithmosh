#include <iostream>
#include <string>
#include <stack>

#define openBracket 40
#define closeBracket 41
#define openAngle 60
#define closeAngle 62
#define openSquare 91
#define closeSquare 93
#define openSquiggly 123
#define closeSquiggly 125

int main() {
    std::stack<char> myCharStack;
    std::stack<char> myStringStack;

    const char* myCharString = "(((1 + 2)))";
    std::string myStringString = "(1 + 2)";

    int charStringSize = strlen(myCharString);
    int stringStringSize = myStringString.size();

    std::cout << "const char* size: " << charStringSize << std::endl;
    std::cout << "std::string size: " << stringStringSize << std::endl;

    for (int i   = 0; i < charStringSize; i++){
        if (myCharString[i] == '(')
            myCharStack.push(myCharString[i]);
        if (myCharString[i] == ')' && (myCharStack.size() == 0)){
            std::cout << "The expression is unbalanced!" << std::endl;
            return 1;
        }
        if (myCharString[i] == ')' && (myCharStack.size() != 0)){
            myCharStack.pop();
        }
    }

    if (myCharStack.size() == 0)
        std::cout << "The expressions are balanced!" << std::endl;
    else
        std::cout << "The expressions are not balanced!" << std::endl;

    return 0;
}
