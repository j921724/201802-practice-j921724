#include <iostream>

int main(){
    int* p;
    std::cout << "int *p\np= "<< p << std::endl;
    std::cout << "&p= "<< &p << std::endl;
    std::cout << "*p= "<< *p << std::endl;
    
    p = new int;
    std::cout << "\np=new int\np= "<< p << std::endl;
    std::cout << "&p= "<< &p << std::endl;
    std::cout << "*p= "<< *p << std::endl;
    
    delete p;
    std::cout << "\ndelete p\np= "<< p << std::endl;
    std::cout << "&p= "<< &p << std::endl;
    std::cout << "*p= "<< *p << std::endl;
    
    int* q;
    std::cout << "\nint*q\nq= "<< q << std::endl;
    std::cout << "&q= "<< &q << std::endl;
    std::cout << "*q= "<< *q << std::endl;
    
    q = p;
    std::cout << "\nq=p\nq= "<< q << std::endl;
    std::cout << "&q= "<< &q << std::endl;
    std::cout << "*q= "<< *q << std::endl;
    
    *q = 10;
    std::cout << "\n*q=10\np= "<< p << std::endl;
    std::cout << "&p= "<< &p << std::endl;
    std::cout << "*p= "<< *p << std::endl;
}