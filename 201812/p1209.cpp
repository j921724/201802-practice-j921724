#include <iostream>
#include <string>

class Student{
public:
    std::string name;
    int grade;
    Student(const std::string n="", const int g=1);
    static int count;
    
};

int Student::count = 0;

Student::Student(const std::string n, int g){
    name = n;
    grade = g;
}