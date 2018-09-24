#include <iostream>

// name space들은 뭐하는 것들일까? 약간 class 같기도 하고...
namespace IntSpace{
    int data;
    void add(int n){data += n;}
    void print(){std::cout << data << std::endl;}
}
namespace DoubleSpace{
    double data;
    void add(double n){data += n;}
    void print(){std::cout << data << std::endl;}
}

int main(){
    IntSpace::data = 3;
    DoubleSpace::data = 2.5;
    IntSpace::add(2);
    DoubleSpace::add(3.2);
    IntSpace::print();
    DoubleSpace::print();
    return 0;
}