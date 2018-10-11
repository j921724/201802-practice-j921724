#include <iostream>
#include <fstream>

void print_function(std::ostream& out)
{
    char buf = '0';
    int a = 49;
    
    out << buf << ", "<< a << std::endl;
}

int main()
{
    char buf = '0';
    int a = 49;
    
    std::ofstream fout;
    fout.open("test.log");
    
    std::cout << buf << ", "<< a << std::endl;
    std::cout << a << std::endl;
    //print("%d", buf)
    
    print_function(std::cout);
    print_function(fout);    
    
    int c = 10;
    int d = 20;
    std::cout << c << ", " << d << std::endl;
    c = c ^ d;
    d = c ^ d;
    c = c ^ d;
    
    std::cout << c << ", " << d << std::endl;
    return 0;
}