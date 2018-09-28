#include <stdio.h>
#include <iostream>

int main(){
    int a=10, b=20;
    int* p;
    p=&a;
    b=*p;
    std::cout << "p*= "<<*p  << " |  p= "<< p<<" |  &a= " << &a <<std::endl;
    std::cout << "p는 주소값, *p는 p라는 주소값을 가진 객체의 값, &a는 객체의 주소" <<std::endl;
    printf("a= %d, b= %d, p= %d\n",a,b,*p);
    
}