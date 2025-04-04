//
//  Animal.hpp
//  cs2
//
//  Created by Dmytro Gozha on 4/3/25.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {}

    virtual void speak() const
    {
        cout << "I am an animal named " << name << " and I am " << age << " years old." << endl;
    }
    

    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    Dog(string n, int a) : Animal(n, a) {}

    void speak() const override
    {
        cout << "Woof! I am a dog named " << name << " and I am " << age << " years old." << endl;
    }
    
    void getOlder();
};

class Cat : public Animal
{
public:
    Cat(string n, int a) : Animal(n, a) {}

    void speak() const override {
        cout << "Meow! I am a cat named " << name << " and I am " << age << " years old." << endl;
    }
};

class Bird : public Animal
{
public:
    Bird(string n, int a) : Animal(n, a) {}

    void speak() const override
    {
        cout << "Chirp! I am a bird named " << name << " and I am " << age << " years old." << endl;
    }
};

#endif /* Animal_hpp */
