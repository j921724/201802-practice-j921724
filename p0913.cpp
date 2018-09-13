#include <iostream>

int main(){
    short b; char ch; float f;
    std::cout << "int: " << sizeof(int) << "short int: " << sizeof(b) << std::endl;
    std::cout << "double: " << sizeof(double) << "float: " << sizeof(f) << std::endl;
    std::cout << "character: " << sizeof(ch) << std::endl;
}