#include <iostream>

int main(){
    int* p;
    std::cout << "p= "<< p << std::endl;
    std::cout << "&p= "<< &p << std::endl;
    std::cout << "*p= "<< *p << std::endl;
    
    p = new int;
    std::cout << "p= "<< p << std::endl;
    std::cout << "&p= "<< &p << std::endl;
    std::cout << "*p= "<< *p << std::endl;
    
    delete p;
    std::cout << "p= "<< p << std::endl;
    std::cout << "&p= "<< &p << std::endl;
    std::cout << "*p= "<< *p << std::endl;
    
    int* q;
    std::cout << "q= "<< q << std::endl;
    std::cout << "&q= "<< &q << std::endl;
    std::cout << "*q= "<< *q << std::endl;
    
    q = p;
    std::cout << "q= "<< q << std::endl;
    std::cout << "&q= "<< &q << std::endl;
    std::cout << "*q= "<< *q << std::endl;
    
}