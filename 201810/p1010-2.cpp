#include <iostream>
int main(){ 
    char charVal = 'A';
    char* charAdr = &charVal;
    std::cout << "&charVal= " << &charVal << std::endl;
    std::cout << "charAdr= " << charAdr << std::endl;
    std::cout << "a" << std::endl;
    }
