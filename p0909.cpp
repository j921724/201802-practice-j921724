#include <iostream>

int multiple(int num1, int num2){
    return num1*num2;
}

int main(){
    int num1, num2;
    std::cout << "Enter first number" << std::endl;
    std::cin >> num1;
    std::cout << "Enter second number" << std::endl;
    std::cin >> num2;
    std::cout << multiple(num1, num2) << std::endl;
    
}