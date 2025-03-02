#include "CarClass.hpp"
#include <cstring>

// constructors
Car::Car(int a, double ma, std::string m, const char* r)
{
    age = a;
    mileage = ma;
    make = m;
    std::strcpy(reg, r);
}

Car::Car()
{
    age = 0;
    mileage = 0;
    make = "N/A";
    std::strcpy(reg, "000000000");
}



// functions
void Car::displayInfo() const
{
    std::cout << "Age: " << age << ", Mileage: " << mileage << ", Make: " << make << ", Reg: " << reg << std::endl;
}

//setters

void Car::setAge(int a)
{
    this->age = a;
}
void Car::setMileage(double d)
{
   this->mileage = d;
}
void Car::setMake(std::string str)
{
    this->make = str;
}
void Car::setRegistration(const char* registr)
{
    std::strcpy(this->reg, registr);
}

//getters

int Car::getAge() const
{
    return this->age;
}
double Car::getMileage() const
{
    return this->mileage;
}
std::string Car::getMake() const
{
    return this->make;
}
const char* Car::getRegistration() const
{
    return this->reg;
}






//Car ford(3, 34192, "Ford", "1234567JK");
//cout << ford.getAge() << endl;
//
//Car *lambo = new Car(1, 476, "Lamborghini", "666LAMBO9Q");
//
//cout << lambo->getAge() << endl;
//
//
//delete lambo;
