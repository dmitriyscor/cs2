//
//  Sortings.cpp
//  cs2
//
//  Created by Dmytro Gozha on 2/6/25.
//

#include "Sortings.hpp"


void bubbleSort(int *arr, int size)
{
    for(int i = 0; i < size-1; ++i)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
                  swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectionSort(int *arr, int size)
{
    for(int startIndex = 0; startIndex < size-1; ++startIndex)
    {
        int smallestIndex = startIndex;
        for(int currentIndex = startIndex+1; currentIndex < size; currentIndex++ )
        {
            if(arr[currentIndex] < arr[smallestIndex])
            {
                smallestIndex = currentIndex;
            }
        }
        
        swap(arr[smallestIndex], arr[startIndex]);
    }
}
