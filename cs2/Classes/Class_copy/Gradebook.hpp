//
//  Gradebook.hpp
//  cs2
//
//  Created by Dmytro Gozha on 3/25/25.
//

#ifndef Gradebook_hpp
#define Gradebook_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

const double DEFAULT_GRADE = 0.0;


class Gradebook
{
    string name;
    int id;
    double *grades;
    int numGrades;
    
    
public:
    Gradebook(int,string,int);
    Gradebook(const Gradebook&);
    
    ~Gradebook()
    {
        delete[] grades;
    }
    
    //getters
    string getName() const;
    int getId() const;
    double* getGrades() const;
    int getNumGrades() const;
    //setters
    void setName(string name);
    void setId(int id);
    void setGrades(double *grades, int numGrades);
    //print info
    void printInfo() const;

};

#endif /* Gradebook_hpp */
