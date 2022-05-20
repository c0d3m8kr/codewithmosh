//
// Created by R W on 2022-05-10.
//

#include "Expression.h"
#include <iostream>
#include <string>
#include <stack>
#include <stdexcept>
#include <array>

Expression::Expression() {
    Expression("");
}

Expression::Expression(std::string input) {
    this->input = input;
    this->next = NULL;
    this->prev = NULL;
}

Expression::~Expression(){}

bool Expression::isBalanced() {
    std::stack<char> stackContainer;
    int strLength = input.size();
    bool balanceCheck = true;

    for (int i = 0; i < strLength; i++){
        if (isLeftBracket(input[i]))
            stackContainer.push(input[i]);
        if (isRightBracket(input[i]))
            if (stackContainer.size() == 0) {
                //throw "3 or 4";
                balanceCheck = false;
                break;
            }
            else {
                char top = stackContainer.top();
                if (bracketsMatch(top, input[i]))
                    stackContainer.pop();
                else
                    return false;
            }
    }

    if (stackContainer.size() == 0 && balanceCheck)
        return true;
    else
        return false;
}

void Expression::printNodes(Expression* node) {
    while(node != NULL) {
        std::cout << node->input << std::endl;
        node = node->next;
    }
}

bool Expression::isLeftBracket(char ch) {
    return std::binary_search(leftBracketArray.begin(),
                              leftBracketArray.end(), ch);
}

bool Expression::isRightBracket(char ch) {
    return std::binary_search(rightBracketArray.begin(),
                              rightBracketArray.end(), ch);
}

bool Expression::bracketsMatch(char left, char right) {
    auto itr_left = std::find(leftBracketArray.begin(), leftBracketArray.end(), left);
    auto itr_right = std::find(rightBracketArray.begin(), rightBracketArray.end(), right);

    return ((itr_left - &leftBracketArray[0]) == (itr_right - &rightBracketArray[0]));

    /*
    return (right == ')' && left != '(') ||
           (right == '>' && left != '<') ||
           (right == ']' && left != '[') ||
           (right == '}' && left != '{');
    */
}