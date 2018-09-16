#include <iostream>

int main(){
    int a = 0;
    int b; // b는 정의되지 않음
    std::cout << "a의 주소: "<< &a << "\tb의 주소: " << &b <<std::endl;
    {//새로운 영역1
        b = 3;      //새로 정의하지 않은 변수 b
        std::cout << "[영역1] b의 주소: " << &b << std::endl;
        {//새로운 영역2
            b = 100;      //새로 정의하지 않은 변수 b
            std::cout << "[영역2] b의 주소: " << &b << std::endl;
            
            int b = 5;  //새로 정의한 변수 b
            std::cout << "[영역2] b의 주소: " << &b << std::endl;
        }
        
        std::cout << "[영역1] b의 주소: " << &b << std::endl;
        int b = 5;  //새로 정의한 변수 b
        std::cout << "[영역1] b의 주소: " << &b << std::endl;
    }
    std::cout << "a의 주소: "<< &a << "\tb의 주소: " << &b <<std::endl;
}