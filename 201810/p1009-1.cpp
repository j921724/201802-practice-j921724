#include<iostream>
int iglobal;
char cglobal;
void func( );

int main() {
    short b; char ch; float f;
    int ilocal;
    char clocal='5';
    char* cadd = &cglobal;
    std::cout<< "int : " << sizeof(int) << " short int : " << sizeof(b) << std::endl;
    std::cout<< "char : " << sizeof(ch) << " float : " << sizeof(f) << std::endl;
    std::cout<< "double : " << sizeof(double) << std::endl;
    std::cout << "integer value of global : " << iglobal << std::endl;
    std::cout << "integer value of local : " << ilocal << std::endl;
    std::cout << "character value of global : " << cglobal << std::endl;
    std::cout << "character value of local : " << clocal << std::endl;
    std::cout<< cadd << std::endl;
    std::cout<<"endline"<<std::endl;
    int lo = 1, gl = 1;
    
    std::cout << "initial value of global :" << gl << std::endl;
    std::cout << "initial value of local :" << lo << std::endl;
    
}
