#include <iostream>

int main(){
    int a = 49;
    char b = '0';
    char c = 'a';
    std::cout << a << "," << (int)b << "," << (int)c << std::endl;
    //cout: 콘솔로 데이터를 출력해주는 함수
    //<<: 재정의 해서 어떤 타입이든 처리할 수 있게 함 (각 value type 대로 << operator가 작동함)
    
    int c = 10;
    int d = 20;
    std::cout << c << ", " << d << std::endl;
    c = c ^ d;  //2진수에서 ^: 같으면 0 다르면 1 
    d = c ^ d;
    c = c ^ d;
    
    std::cout << c << ", " << d << std::endl;
}