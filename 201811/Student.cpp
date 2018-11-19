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

int Student::get_id()
{
    return _id;
}

void Student::set_id(int _value)
{
    _id = _value;
}

char* Student::get_name()
{
    return _name;
}
