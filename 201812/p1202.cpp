#include <iostream> 
using namespace::std;

int count = 1;
class student{
    char name[20];
    int age; 
public:
    student(char* _name, int_age){
        strcpy(name, _name);
        age = _age; 
        cout<< count++ << "thstudent" << endl;
    }
};

int main(){
    student s1("Kim", 20);
    student s2("Seo", 28);
    return 0;
}