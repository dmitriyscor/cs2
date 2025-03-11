//
//  CarClass.hpp
//  cs2
//
//  Created by Dmytro Gozha on 2/25/25.
//

#ifndef CarClass_hpp
#define CarClass_hpp

typedef char VRN[10]; //vehicle registration number

#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>


class Car
{
private:
    // variables
    int age;
    double mileage;
    std::string make;
    VRN reg;

public:
    // constructors
    Car(int a, double ma, std::string m, const char* r);
    Car();

    // functions
    void displayInfo() const;
    
    void setAge(int);
    void setMileage(double);
    void setMake(std::string);
    void setRegistration(const char* );
    
    int getAge() const;
    double getMileage() const;
    std::string getMake() const;
    const char* getRegistration() const;
    
};


#endif /* CarClass_hpp */
