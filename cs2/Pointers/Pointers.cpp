//
//  Pointers.cpp
//  cs2
//
//  Created by Dmytro Gozha on 2/25/25.
//

#include "Pointers.hpp"

void set(float* fArr, int size)
{
    for(int i = 0; i < size; ++i) //using for loop to set the values
    {
        cin >> *(fArr+i);
    }
}

void get(float* fArr, int size)
{
    for(int i = 0; i < size; ++i) //using for loop to print the values
    {
        cout << "Arr [" << i << "] = " << *(fArr+i) << "\n";
    }
}

string* setString()
{
    string *str = new string;
    cin.ignore();
    getline(cin, *str);
    
    return str;
}
int* setInteger()
{
    int *tInt = new int;
    cin >> *tInt;
    return tInt;
}



//=================unique_ptr===================

//unique_ptr<int> ptr;
//ptr = unique_ptr<int>(new int(10));
//
//int* ptr2;
//ptr2 = new int(20);
//
//
//cout << *ptr << endl;
//cout << *ptr2 << endl;
//
//
//delete ptr2;

//================================================
