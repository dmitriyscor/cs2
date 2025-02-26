//
//  Searches.cpp
//  cs2
//
//  Created by Dmytro Gozha on 2/6/25.
//

#include "Searches.hpp"




void printArray(int *arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout << "arr[" << i << "] = " << arr[i] << "\n";
    }
}

int linearSearch(int *arr, int num, int size)
{
    for(int i = 0; i < size; ++i)
    {
        if(num == arr[i])
            return i;
    }
    return -1;
}

int binarySearch(int *arr, int num, int size)
{
    for(int i = size/2; i < size; )
    {
        if(arr[i] < num)
            i += i / 2;
        else if(arr[i] > num)
            i -= i /2;
        else
            return i;
    }
    return -1;
}
