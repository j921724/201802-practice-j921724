#include <stdio.h>
#include <iostream>

int main(){
    int a = 10;
    int* p1 = &a;
    int** p2 = &p1;
    
    printf("a=%d    *p1=%d   **p2=%d\n",a,*p1,**p2);
    std::cout << "*p1= "<<*p1  << " | **p2= "<< **p2<<" | &a= " << &a << " | p1= " << p1 << " | *p2= "<< *p2 << " | &p1= "<< &p1<< " | p2= "<<p2<<std::endl;
}