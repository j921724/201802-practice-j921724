#include <iostream>

int main(){
    int type;
    int* ptype;
    double* fptype;
    int a[10];
    int* pa;
    ptype= &type;
    fptype= (double*)&type;
    
    std::cout<< "type= " << type << std::endl;
    std::cout<< "ptype= "<< ptype << std::endl;
    std::cout<< "fptype= " << fptype << std::endl;
    std::cout<< "pa= "<< pa<<std::endl;
    
    std::cout<< "\n@ nullpointer exception: 포인터에 nullptr 할당하고 해당값을 불러오려고 하면 에러뜸 > 존재하지 않는 값을 불러오려하는 것"<<std::endl;
    std::cout<< "@ int* fptype; 하고 fptype을 불러오면 쓰레기값을 불러오게 됨 > 에러 뜸" << std::endl;
    std::cout<< "@ array name is constant pointer value > 포인터 변수에 array name할당 가능(변수가 주소값을 가지고 있음)" << std::endl;
    std::cout<< "@ 만약 내가 주소값에 접근하고 싶은데 1바이트 단위로 접근하려고 할 경우 > (((char*)pa)+1) "<< std::endl;
    std::cout<< "@ string은 character array, 즉 constant pointer value." <<std::endl;
    std::cout<< "@ string의 마지막이 어딘지 알기 위해 컴퓨터는 마지막에 '\\0' null character를 넣음"<<std::endl;
    
}