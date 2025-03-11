//
//  Employee.hpp
//  cs2
//
//  Created by Dmytro Gozha on 3/6/25.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee
{
    string name;
    int idNum;
    string department;
    string position;
    
    
public:
    //constructors
    Employee(string n, int id, string dep, string pos);
    
    Employee(string n, int id);
    
    Employee();
    
    //setters
    void setName(string n);
    void setId(int id);
    void setDepartment(string dep);
    void setPosition(string pos);
    //getters
    string getName();
    int getId();
    string getDepartment();
    string getPosition();
    
    //print
    void printInfo();
    
};


#endif /* Employee_hpp */
