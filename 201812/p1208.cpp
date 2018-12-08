#include <iostream>

class student
{
public:
    int value;
    static int count;
    static int* m_pArray;
    
public:
    student()
    {
        count++;
        if(m_pArray == nullptr)
            m_pArray = new int[100];
    }
    
    ~student()
    {
        count--;
        if(count == 0)
        {
                delete [] m_pArray;
                std::cout << "deleted" << std::endl;
        }
    }
};

int student::count = 0;
int* student::m_pArray = nullptr;

int main()
{
    {
        student s1;
        {
            student s2;
            std::cout << "Inside of the local scope:" << student::count << std::endl;
        }
        std::cout << student::count << std::endl;
    }
       std::cout << student::count << std::endl;
       
    return 0;
}