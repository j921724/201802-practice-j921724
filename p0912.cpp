#include <iostream>

int plus(int a, int b){
    return a+b;
}

int main(){
    int num1, num2;
    std::cout << "Enter first number" << std::endl;
    std::cin >> num1;
    std::cout << "Enter second number" << std::endl;
    std::cin >> num2;
    std::cout << plus(num1, num2) << std::endl;
    
}