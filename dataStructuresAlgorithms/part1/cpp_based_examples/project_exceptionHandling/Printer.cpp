//
// Created by R W on 2022-05-10.
//

#include "Printer.h"

Printer::Printer(std::string name, int paper) {
    this->_name = name;
    this->_availablePaper = paper;
}

void Printer::print(std::string txtDoc) {
    int requiredPaper = txtDoc.length()/10;         // 10 characters per page.
                                                    // So if 40 characters is string length, then...
                                                    // 40 / 10 = 4 pages needed!
    if (requiredPaper > _availablePaper)
        //throw "No paper";     // throw a 'text' exception
        throw 101;              // throw integer exception

    std::cout << "Printing..." << txtDoc << std::endl;
    _availablePaper -= requiredPaper;               // update the total paper available.
}