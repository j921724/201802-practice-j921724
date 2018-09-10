#include <iostream>

int main(){
    std::cout << "identifier\taddress\tspace(Type)\tinterpretation" << std::endl;
    std::cout << "number 1\t0x1000\t4byte(int)\t??" << std::endl;
    std::cout << "number 2\t0x1004\t4byte(int)\t??" << std::endl;
    std::cout << "이름\t\t 시작주소  데이터 크기        어떤 값인지 모름" << std::endl;
    std::cout << "데이터를 인코딩하는 방법을 배움 HEX 0x30 > ASCII \'0\'" << std::endl;
    std::cout << "형변환: interpretation을 바꾸겠다" << std::endl;
    std::cout << "number1 = number2;\t기존 number1에 있던 값은 지워짐(destructive update)" << std::endl;
    std::cout << "number1 += 1;\t" << std::endl;
    std::cout << "left hand side(space) = right hand side(value) " <<std::endl;
    std::cout << "number1은 여기서 identifier\tidentifier를 통해 주소값과 데이터값을 들고 옴" << std::endl;
    std::cout << "{}가 등장하면 새로운 영역" << std::endl;
}