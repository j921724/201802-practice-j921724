#include "Student.h"

#include <cstring>

Student::Student()
:_id(0), _name(nullptr)
{
    _id = 10;
}

Student::Student(const char* _value)
: _id(0)
{
    _name = new char[strlen(_value) +1];
    strcpy(_name, _value);
    _name[strlen(_value)] = '\0';
}

Student::Student(const Student& rhs)
{
    this->_id = rhs._id;
    this->_name = new char[strlen(rhs.name)+1];
    strcpy(this->_name, rhs.name);
    this->_name[strlen(rhs.name)] = '\0';
}

int Student::get_id()
{
    return _id;
}

Student::~Student()
{
    strcpy(_name, "!!!!!!");    
}

void Student::set_id(int _value)
{
    _id = _value;
}

char* Student::get_name()
{
    return _name;
}
