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

using namespace std;


int main()
{
    PersonalDocument p1("Alex", "15 years old, was born in Eastern Europe. Phone number is unknowm.");
    PersonalDocument p2(p1);
    PersonalDocument *p3 = new PersonalDocument(p1);
    PersonalDocument p4("Peter", "Peter does not exist.");
    
    cout << p1 << endl;
    cout << p2 << endl;
    cout << *p3 << endl;
    cout << p4 << endl;
    
    if(p1==p4)
    {
        cout << "Cool" << endl;
    }
    else
    {
        cout << "Not cool" << endl;
    }
    
    
    delete p3;

    return 0;
}
