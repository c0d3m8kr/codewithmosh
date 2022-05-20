//
// Created by R W on 2022-05-10.
//

#ifndef PROJECT_EXCEPTIONHANDLING_PRINTER_H
#define PROJECT_EXCEPTIONHANDLING_PRINTER_H

#include <iostream>
#include <string>

class Printer {
    public:
        Printer(std::string name, int paper);
        void print(std::string txtDoc);


    private:
        std::string _name;
        int _availablePaper;
};


#endif //PROJECT_EXCEPTIONHANDLING_PRINTER_H
