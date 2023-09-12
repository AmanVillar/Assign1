#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

#include <utility>

class ArrayFunctions {
public:
    // Function to search for an integer in the array
    static int searchArray(int array[], int size, int element);

    // Function to modify the value of an integer in the array and return the old and new values
    static std::pair<int, int> modifyValue(int array[], int size, int index, int newValue);

    // Function to add an integer to the end of the array
    static void addInteger(int array[], int& size, int num);

    // Function to replace or remove an integer in the array
    static void replaceOrRemove(int array[], int& size, int index, int newValue);
};

#endif

