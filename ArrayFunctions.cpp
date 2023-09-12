#include "ArrayFunctions.h"
#include <iostream>

// Function to search for an integer in the array
int ArrayFunctions::searchArray(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i; // Return the index where the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

// Function to modify the value of an integer in the array and return the old and new values
std::pair<int, int> ArrayFunctions::modifyValue(int array[], int size, int index, int newValue) {
    std::pair<int, int> result;

    if (index >= 0 && index < size) {
        result.first = array[index]; // Store the old value
        result.second = newValue; // Store the new value
        array[index] = newValue; // Update the value at the specified index
    }
    else {
        // Handle the case of an invalid index
        std::cout << "Invalid index." << std::endl;
    }

    return result;
}

// Function to add an integer to the end of the array
void ArrayFunctions::addInteger(int array[], int& size, int num) {
    if (size < 10) {
        array[size] = num; // Add the integer to the end of the array
        size++; // Increment the size of the array
    }
    else {
        // Handle the case where the array is full
        std::cout << "Array is full. Cannot add more integers." << std::endl;
    }
}

// Function to replace or remove an integer in the array
void ArrayFunctions::replaceOrRemove(int array[], int& size, int index, int newValue) {
    if (index >= 0 && index < size) {
        if (newValue == 0) {
            // Replace the value at the specified index with 0
            for (int i = index; i < size - 1; i++) {
                array[i] = array[i + 1];
            }
            size--; // Decrement the size of the array
        }
        else {
            // Replace the value at the specified index with the new value
            array[index] = newValue;
        }
    }
    else {
        // Handle the case of an invalid index
        std::cout << "Invalid index." << std::endl;
    }
}

