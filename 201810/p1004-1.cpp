#include <iostream>
#include <cstring>
#include <cstdio>

int main(){
    //보안 이슈(해킹)가 발생하므로 이 세가지는 사용하면 안됨!!
    char str_name1[] = "string";  
    char str_name2[] = {'s','t','r','i','n','g','\0'};  
    //char* str_name3 = "string"; // 이부분 에러뜸. sad...
    std::cout << "name1: " << str_name1 << std::endl;
    std::cout << "name2: " << str_name2 << std::endl;
    //std::cout << "name3: " << *str_name3 << std::endl;
    
    // 명시적으로 메모리를 할당함으로써 안전... 근데 불편하니깐 쓰지 마셈
    char* str_name4 = new char[strlen(" ")+1];
    strcpy(str_name4," ");
    
    // 결론: 이렇게 써라.
    std::string str="";
    
    // text file 한 줄씩 읽어오는 것
    //std::cin.getline(array; size; delimiter);
    
    
}