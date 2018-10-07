#include <iostream>

int main(){
    int i1 = 10;
    char c1 = 'A';
    char c2[] = "I love myself";
    int* a = &i1;
    char* b = &c1;
    char* c = c2;
    std::cout<< "a= " << a <<std::endl;
    std::cout<< "b= " << b <<std::endl;
    std::cout<< "c= " << c <<std::endl;
}