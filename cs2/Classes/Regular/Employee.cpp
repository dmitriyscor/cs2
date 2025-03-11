#include "Employee.hpp"

Employee::Employee(string n, int id, string dep, string pos)
{
    this->name = n;
    this->idNum = id;
    this->department = dep;
    this->position = pos;
}

Employee::Employee(string n, int id)
{
    this->name = n;
    this->idNum = id;
}

Employee::Employee()
{
    this->name = "";
    this->idNum = 0;
    this->department = "";
    this->position = "";
}


void Employee::setName(string n)
{
    this->name = n;
}
void Employee::setId(int id)
{
    this->idNum = id;
}
void Employee::setDepartment(string dep)
{
    this->department = dep;
}
void Employee::setPosition(string pos)
{
    this->position = pos;
}


string Employee::getName()
{
    return this->name;
}
int Employee::getId()
{
    return this->idNum;
}
string Employee::getDepartment()
{
    return this->department;
}
string Employee::getPosition()
{
    return this->position;
}


void Employee::printInfo()
{
    cout << setw(15) << this->name << setw(15) << this->idNum << setw(25) << this->department << setw(15) << this->position << endl;
}

