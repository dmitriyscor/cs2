//Dmytro G,
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>

#include "Searches/Searches.hpp"
#include "Sortings/Sortings.hpp"
#include "Pointers/Pointers.hpp"
#include "Classes/Regular/CarClass.hpp"
#include "Classes/Regular/Employee.hpp"
#include "Classes/Friend/Server.hpp"
#include "Classes/Class_copy/Gradebook.hpp"
#include "Classes/OperatorOverloading/Documentation.hpp"
#include "Classes/Composition/GameServer.hpp"
#include "Classes/Inheritance/Animal.hpp"

using namespace std;




int main()
{

    Animal* myDog = new Dog("Tod", 3);
    Dog *myDog2 = new Dog("Ted", 1);
    Animal* myCat = new Cat("Whiskers", 5);
    Animal* myBird = new Bird("Tweety", 2);

    myDog->speak();
    cout << endl;
    myDog2->speak();
    myDog2->getOlder();
    myDog2->speak();
    cout << endl;
        
    myCat->speak();
    myBird->speak();

    delete myDog;
    delete myDog2;
    delete myCat;
    delete myBird;

    
    
    return 0;
}
