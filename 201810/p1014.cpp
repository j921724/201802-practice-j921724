#include <iostream>

main(void){
    char str1[] ="hi there!";
    const char* str2 = "hello";
    char str3[] =  {'h','i','\n'};
    char str4[2];
    std::cin>> str1 >> str4;
    std::cout << "str1: "<<str1 <<std::endl;
    std::cout << "str2: "<<str2 <<std::endl;
    std::cout << "str3: "<<str3 <<std::endl;
    std::cout << "str4: "<< str4 <<std::endl;
}