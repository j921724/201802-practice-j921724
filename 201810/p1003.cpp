#include <iostream>

// 나중에 큰 프로그램을 짤 때 namespace가 유용하게 쓰임

namespace A{
    int a;
    void print(){std::cout<< a <<" is in the namespace A"<< std::endl;}
}

namespace B{
    int b;
    void print(){std::cout << b << " is in the namespace B" <<std::endl;}
    
}
int main(){
    A::a = 7;
    B::b = 1;
    A::print();
    B::print();
}