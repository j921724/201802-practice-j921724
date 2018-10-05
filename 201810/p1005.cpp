#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

int main()
{// A1
    std::stringstream sstream;
    std::string str = "test";  
    std::cout  <<"str = " << str << std::endl;
    
    {// B1
        // A1 vaild
        
    }// B1 destroyed
    
    { //B2
        // A1 vaild
        // B1 not vaild
        std::string str = "test";
        str += "30";                                    //overloading
        sstream << str << "30" << std::endl;
        std::cout << str << "30" << std::endl;
        std::cout << "str size = " << str.size() << std::endl;

    }// B2 destroyed
    
    std::cout << sstream.str() << std::endl;
    return 0;
    
}

//같은 stack(영역)에 같은 value가 있으면 에러뜸
//stack의 원리로, first in-last out: 가장 최근 영역에 값이 존재하면 더 상위레벨 가지 않고 해당 값을 가지고 돌아옴
//같은 stack 안에는 변수가 unique 해야함. 다른 영역에 같은 값(변수) 존재해도 됨