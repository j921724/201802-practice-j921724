#include <iostream>

int main(){
    int my_code = 101;
    int my_code2 = 0;
    
    std::cout << &my_code <<std::endl;
    std::cout << &my_code2 <<std::endl;
    
    {
        int my_code2 = my_code;
        
    std::cout << &my_code <<std::endl;
    std::cout << &my_code2 <<std::endl;
    
        {
        char buf = '0';
        buf = buf + 1;
        std::cout << sizeof(buf) <<  std::endl;
        std::cout << buf <<std::endl;
        std::cout << &my_code <<std::endl;
        std::cout << &my_code2 <<std::endl;
        std::cout << &buf << std::endl;    
        }
        my_code2 = my_code * 100;
        
    std::cout << &my_code <<std::endl;
    std::cout << &my_code2 <<std::endl;
    std::cout << my_code2   <<std::endl;
    
    }
    my_code = 10;
    std::cout << &my_code <<std::endl;
    std::cout << &my_code2 <<std::endl;
}