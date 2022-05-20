#include <iostream>
#include <string>
#include "Printer.h"

int main() {
    // try, catch, throw

    Printer* hpPrinter = new Printer("HP DeskJet 1234", 10);

    hpPrinter->print("Hello, my name is Ronnie. I am a software engineer.");
    try {
        hpPrinter->print("Hello, my name is Ronnie. I am a software engineer.");
        hpPrinter->print("Hello, my name is Ronnie. I am a software engineer.");
        hpPrinter->print("Hello, my name is Ronnie. I am a software engineer.");
    }
    catch (const char* txtException) {
        std::cout << "Exception: " << txtException << std::endl;
    }
    catch (int exCode) {
        std::cout << "exCode: " << exCode << std::endl;
    }
    catch(...){
        std::cout << "Exception happened!" << std::endl;
    }

    return 0;
}
