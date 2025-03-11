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


using namespace std;


int main()
{
    
    //create three employee objects with specified data
    Employee SM("Susan Meyers", 47899, "Marketing", "Sales Rep");
    Employee MJ("Mark Jones", 39119, "IT", "Programmer");
    Employee JR("Joy Rogers", 81774, "Manufacturing", "Engineer");
    //run print function for each employee
    cout << setw(15) << "Name" << setw(15) << "ID" << setw(25) << "Department" << setw(15) << "Position" << endl;

    SM.printInfo(); cout << "\n";
    MJ.printInfo(); cout << "\n";
    JR.printInfo(); cout << "\n";
    
    

    return 0;
}
