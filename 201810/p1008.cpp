#include <iostream>
#include <stdio.h>

int main(){
    int intVal = 10;
    int* intAdr = &intVal;
    int intarrVal[10]= {1,3,5,7,9};
    int* intarrAdr = intarrVal;
    char charVal = 'A';
    char* charAdr = &charVal;
    char strVal[] = "I love myself!";
    char* strAdr = strVal;
    printf("--------Address and Value--------\n");
    printf("<integer type>\n");
    std::cout << "intVal= " << intVal << std::endl;
    std::cout << "&intVal= " << &intVal << std::endl;
    std::cout << "intAdr= " << intAdr << std::endl;
    std::cout << "*intAdr= " << *intAdr << std::endl;
    std::cout << "\nintarrVal= " << intarrVal << std::endl;
    std::cout << "&intarrVal= " << &intarrVal << std::endl;
    std::cout << "intarrAdr= " << intarrAdr << std::endl;
    std::cout << "*intarrAdr= " << *intarrAdr << std::endl;
    std::cout << "\ncharVal= " << charVal << std::endl;
    std::cout << "&charVal= " << &charVal << std::endl;
    std::cout << "charAdr= " << charAdr << std::endl;
    std::cout << "&charAdr= " << &charAdr << std::endl;
    std::cout << "\nstrVal= " << strVal << std::endl;
    std::cout << "&strVal= " << &strVal << std::endl;
    std::cout << "strAdr= " << strAdr << std::endl;
    std::cout << "*strAdr= " << *strAdr << std::endl;
     
}

// struct {} 뒤에 ; 필수
// ex: struct student{
//      int _id;
//      char _name[20];
//      } stu;      << 여기있는 ';' 필수
// user defined type 'student'의 변수 stu가 생겨남
// student stu; 가 정의됨
// id   add     space                       inter
// stu  A1      struct student type         
//              -여기서는 24bytes
//              -(int + char[20])