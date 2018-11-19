#pragma once
#ifndef _STUDENT_H
#define _STUDENT_H

class Student
{
private:
    int _id;
    char* _name;
    
public:
    Student(); // 1. Default Constructor Handling
    Student(const char* _value); // 2. Initializer 
    // 3. option 3
    
    Student(const Student& rhs);
    
    ~Student();
    
public:
    int get_id();
    void set_id(int _value);
    
    char* get_name();
};
#endif