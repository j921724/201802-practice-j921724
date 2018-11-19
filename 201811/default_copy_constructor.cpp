#include <iostream>
#include "Student.h"

int main()
{
    Student s("cbchoi");
    s.set_id(20);
    
    std::cout << "s.id:" << s.get_id() << std::endl;
    std::cout << "s.name:" << s.get_name() << std::endl;
    std::cout << "s.name -> address:" << static_cast<void *>(s.get_name()) << std::endl;
   
   {
        Student s2 = s;
        std::cout << "s2.id:" << s2.get_id() << std::endl;
        std::cout << "s2.name:" << s2.get_name() << std::endl;
        std::cout << "s2.name -> address:" << static_cast<void *>(s2.get_name()) << std::endl;
   }
    std::cout << "s.name:" << s.get_name() << std::endl;

    return 0;
} 


