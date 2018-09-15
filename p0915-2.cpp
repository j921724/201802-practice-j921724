#include <iostream>

int main(){
    int idx;
    std::cout << &idx <<std::endl;
    for(idx = 0; idx < 2; idx++){
        std::cout << &idx <<std::endl;
        
        for(int i = 0; i < 2; i++){
            std::cout << i * idx << std::endl;
            
            std::cout << &i <<std::endl;
            std::cout << &idx <<std::endl;
        }std::cout << &idx <<std::endl;
    }std::cout << &idx <<std::endl;
}
