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
