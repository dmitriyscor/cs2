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

using namespace std;




int main()
{
    Gradebook student1(001, "Alex", 5);
    
    student1.printInfo();
    cout << endl;
    
    double * newGrades = new double[5]{1,2,3,4,5};
    student1.setGrades(newGrades, 5);
    
    student1.printInfo();
    cout << endl;
    
    Gradebook student2(student1);
    student2.printInfo();

    return 0;
}
