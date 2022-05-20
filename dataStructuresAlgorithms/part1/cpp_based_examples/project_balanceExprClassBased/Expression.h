//
// Created by R W on 2022-05-10.
//

#ifndef PROJECT_BALANCEEXPRCLASSBASED_EXPRESSION_H
#define PROJECT_BALANCEEXPRCLASSBASED_EXPRESSION_H

#include <iostream>
#include <string>
#include <array>

class Expression {
    public:
        Expression();
        Expression(std::string input);
        ~Expression();
        bool isBalanced();
        void printNodes(Expression* node);

        std::string input;
        Expression* next;
        Expression* prev;
    private:
        bool isLeftBracket(char ch);
        bool isRightBracket(char ch);
        bool bracketsMatch(char left, char right);
        const std::array<char, 4> leftBracketArray{'(', '<', '[', '{'};
        const std::array<char, 4> rightBracketArray{')', '>', ']', '}'};
};


#endif //PROJECT_BALANCEEXPRCLASSBASED_EXPRESSION_H
