#pragma once
#ifndef _STUDENT_H
#define _STUDENT_H

#include <string>

class Student
{
private:
    int _id;
    //char* _name;
    std::string _name;
    
// public:
private:
    // 3. option 3
    Student(); // 1. Default Constructor Handling
public:
    Student(const char* _value); // 2. Initializer 
    
    Student(const Student& rhs);
    
    ~Student();
    
public:
    int get_id();
    void set_id(int _value);
    
    //char* get_name();
    std::string get_name();
};
#endif